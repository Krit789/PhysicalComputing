float voltage, temp;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  // put your setup code here, to run once:
}

void loop() {
  voltage = analogRead(A0);
  voltage *= 5.0 / 1023.0;
  temp = (voltage/0.01) - .5;
  // temp = (750 / 7) * (voltage - 1) + 50;
  temp = (temp - 32.0) * (5.0/9.0);
  // Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println();
  // put your main code here, to run repeatedly:

}
