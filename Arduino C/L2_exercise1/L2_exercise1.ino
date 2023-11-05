int pulseWidth;
long distance;
void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);
  delayMicroseconds(10);
  digitalWrite(5, LOW);
  pulseWidth = pulseIn(3, HIGH);
  Serial.print("Pulse Width: ");
  Serial.println(pulseWidth);
  distance = pulseWidth / 29 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(200);
}
