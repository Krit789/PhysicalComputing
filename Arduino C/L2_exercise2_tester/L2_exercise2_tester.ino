void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(12, INPUT);

}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, LOW);
  if (digitalRead(6) == LOW) {
    Serial.print("A");
    delay(200);
  }
  else if (digitalRead(7) == LOW) {
    Serial.print("B");
    delay(200);
  }
  else if (digitalRead(8) == LOW) {
    Serial.print("C");
    delay(200);
  }
  else if (digitalRead(12) == LOW) {
    Serial.print("D");
    delay(200);
  }
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  if (digitalRead(6) == LOW) {
    Serial.print("3");
    delay(200);
  }
  else if (digitalRead(7) == LOW) {
    Serial.print("6");
    delay(200);
  }
  else if (digitalRead(8) == LOW) {
    Serial.print("9");
    delay(200);
  }
  else if (digitalRead(12) == LOW) {
    Serial.print("#");
    delay(200);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  if (digitalRead(6) == LOW) {
    Serial.print("2");
    delay(200);
  }
  else if (digitalRead(7) == LOW) {
    Serial.print("5");
    delay(200);
  }
  else if (digitalRead(8) == LOW) {
    Serial.print("8");
    delay(200);
  }
  else if (digitalRead(12) == LOW) {
    Serial.print("0");
    delay(200);
  }
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  if (digitalRead(6) == LOW) {
    Serial.print("1");
    delay(200);
  }
  else if (digitalRead(7) == LOW) {
    Serial.print("4");
    delay(200);
  }
  else if (digitalRead(8) == LOW) {
    Serial.print("7");
    delay(200);
  }
  else if (digitalRead(12) == LOW) {
    Serial.print("*");
    delay(200);
  }
  digitalWrite(5, HIGH);
}
