String serialString = String(6);
void setup() {
  Serial.begin(115200);
  pinMode(9, OUTPUT); // Blue LED Pin
  pinMode(10, OUTPUT);  // Green LED Pin
  pinMode(11, OUTPUT);  // Red LED Pin
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Waiting for Color Input (Red, Green, Blue)");
  while (Serial.available() == 0) {}
  serialString = Serial.readString();
  serialString.toUpperCase();
  serialString.trim();
  if (serialString.equals("RED")) {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    Serial.println("Turning Red");
  } else if (serialString.equals("GREEN")) {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    Serial.println("Turning Green");
  } else if (serialString.equals("BLUE")) {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    Serial.println("Turning Blue");
  } else {
    Serial.println("Invalid input please try again.");
  }
}
