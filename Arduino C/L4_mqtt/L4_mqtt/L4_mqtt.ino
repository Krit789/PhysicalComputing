#include <WiFiEspAT.h>
#include <PubSubClient.h>

#if defined(ARDUINO_ARCH_AVR) && !defined(HAVE_HWSERIAL1)
#include "SoftwareSerial.h"
SoftwareSerial Serial1(2, 3); // RX, TX
#define AT_BAUD_RATE 9600
#else
#define AT_BAUD_RATE 115200
#endif

byte num_array[10][7] = {{0, 1, 1, 1, 1, 1, 1},  // 0
                         {0, 0, 0, 1, 0, 0, 1},  // 1
                         {1, 0, 1, 1, 1, 1, 0},  // 2
                         {1, 0, 1, 1, 0, 1, 1},  // 3
                         {1, 1, 0, 1, 0, 0, 1},  // 4
                         {1, 1, 1, 0, 0, 1, 1},  // 5
                         {1, 1, 1, 0, 1, 1, 1},  // 6
                         {0, 0, 1, 1, 0, 0, 1},  // 7
                         {1, 1, 1, 1, 1, 1, 1},  // 8
                         {1, 1, 1, 1, 0, 1, 1}}; // 9

const char ssid[] = "";
const char password[] = "";
const char *mqtt_server = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);
unsigned long lastMsg = 0;
#define MSG_BUFFER_SIZE (242)
char msg[MSG_BUFFER_SIZE];
int value = 0;
float voltage, temp;

void setup()
{
  // put yx`our setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(A5, OUTPUT); // g
  pinMode(A4, OUTPUT); // f
  pinMode(4, OUTPUT);  // a
  pinMode(5, OUTPUT);  // b
  pinMode(6, OUTPUT);  // e
  pinMode(7, OUTPUT);  // d
  pinMode(8, OUTPUT);  // c
  // pinMode(9, OUTPUT);  // dp
  pinMode(12, OUTPUT); // 7-seg left
  pinMode(13, OUTPUT); // 7-seg left
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  Serial.begin(115200);
  while (!Serial)
    ;

  Serial1.begin(AT_BAUD_RATE);
  WiFi.init(Serial1);

  if (WiFi.status() == WL_NO_MODULE)
  {
    Serial.println();
    Serial.println("Communication with WiFi module failed!");
    // don't continue
    while (true)
      ;
  }

  WiFi.disconnect(); // to clear the way. not persistent

  WiFi.setPersistent(); // set the following WiFi connection as persistent

  WiFi.endAP(); // to disable default automatic start of persistent AP at startup

  Serial.println();
  Serial.print("Attempting to connect to SSID: ");
  Serial.println(ssid);

  //  use following lines if you want to connect with bssid
  //  const byte bssid[] = {0x8A, 0x2F, 0xC3, 0xE9, 0x25, 0xC0};
  //  int status = WiFi.begin(ssid, pass, bssid);

  int status = WiFi.begin(ssid, password);

  if (status == WL_CONNECTED)
  {
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.print("IP address: ");
    Serial.print(WiFi.localIP());
    Serial.print(" Gateway: ");
    Serial.println(WiFi.gatewayIP());
  }
  else
  {
    WiFi.disconnect(); // remove the WiFi connection
    Serial.println();
    Serial.println("Connection to WiFi network failed.");
  }
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
}

void callback(char *topic, byte *payload, unsigned int length)
{

  // Serial.print("Message arrived [");
  // Serial.print(topic);
  // Serial.print("] ");
  // for (int i = 0; i < length; i++)
  // {
  //   Serial.print((char)payload[i]);
  // }
  // Serial.println();

  // // Switch on the LED if an 1 was received as first character
  // if ((char)payload[0] == '1')
  // {
  //   digitalWrite(LED_BUILTIN, LOW); // Turn the LED on (Note that LOW is the voltage level
  //   // but actually the LED is on; this is because
  //   // it is active low on the ESP-01)
  // }
  // else
  // {
  //   digitalWrite(LED_BUILTIN, HIGH); // Turn the LED off by making the voltage HIGH
  // }
  String commands;
  // Serial.print("Message arrived [");
  // Serial.print(topic);
  // Serial.print("] ");
  for (int i = 0; i < length; i++)
  {
    // Serial.print((char)payload[i]);
    commands += (char)payload[i];
  }
  // commands.toLowerCase();
  // analogWrite(9, commands.toInt() / 4);
  // if (commands == "red")
  // {
  //   digitalWrite(9, LOW); // Red
  //   digitalWrite(10, HIGH); // Green
  //   digitalWrite(11, HIGH); // Blue
  // }
  // else if (commands == "green")
  // {
  //   digitalWrite(9, HIGH);
  //   digitalWrite(10, HIGH);
  //   digitalWrite(11, LOW);
  // }
  // else if (commands == "blue")
  // {
  //   digitalWrite(9, HIGH);
  //   digitalWrite(10, LOW);
  //   digitalWrite(11, HIGH);
  // } else if (commands == "off")
  // {
  //   digitalWrite(9, HIGH);
  //   digitalWrite(10, HIGH);
  //   digitalWrite(11, HIGH);
  // }
}

void reconnect()
{
  // Loop until we're reconnected
  while (!client.connected())
  {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ArduinoMQTT-HHas";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str()))
    {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("Creative2/", "hello esp8266");
      // ... and resubscribe
      client.subscribe("Creative2/#");
    }
    else
    {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (!client.connected())
  {
    reconnect();
  }
  client.loop();

  unsigned long now = millis();
  unsigned long endtime = now;
  int temp = (int) round(calculateTemp(analogRead(A0)));
  while ((endtime - now) <= 1000)
  {
    showTwoDigits(temp);
    endtime = millis();
  }

  if (now - lastMsg > 2000)
  {
    lastMsg = now;
    ++value;

    char buffer[5];
    dtostrf(calculateTemp(analogRead(A0)), 5, 2, buffer);

    // snprintf (msg, MSG_BUFFER_SIZE, "hello world #%ld", value);

    snprintf(msg, MSG_BUFFER_SIZE, "Temperature %s degC", buffer);

    Serial.print("Publish message: ");
    Serial.println(msg);
    client.publish("65070197/light", msg);

    snprintf(msg, MSG_BUFFER_SIZE, "%d", analogRead(A1));
    client.publish("Creative2", msg);

    // client.publish("Lab304", );
  }
}

float calculateTemp(float voltage)
{
  voltage *= 5.0 / 1023.0;
  temp = (voltage / 0.01) - .5;
  return (temp - 32.0) * (5.0 / 9.0);
}

void showTwoDigits(int number)
{
  byte digits[2] = {(number / 10) % 10, number % 10};
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  for (byte i = 0; i < 2; i++)
  {
    byte pin = 0;
    for (byte j = 0; j < 7; j++)
    {
      if (pin == 0)
      {
        digitalWrite(19, num_array[digits[i]][j]);
      }
      else if (pin == 1)
      {
        digitalWrite(18, num_array[digits[i]][j]);
      }
      else
      {
        digitalWrite(pin, num_array[digits[i]][j]);
      }
      pin++;
      if (pin == 2)
      {
        pin += 2;
      }
    }
    delay(1);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
}
