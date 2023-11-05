void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT); // BLue LED Pin
  pinMode(10, OUTPUT);  // Green LED Pin
  pinMode(11, OUTPUT);  // Red LED Pin
  pinMode(12, INPUT);

}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, LOW);
  if (digitalRead(6) == LOW) { // A Button
    analogWrite(9, 255);
    analogWrite(10, 255);
    analogWrite(11, 0);
  }
  else if (digitalRead(7) == LOW) {  // B Button
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(11, 255);
  }
  else if (digitalRead(8) == LOW) { // C Button
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 255);
  }
  else if (digitalRead(12) == LOW) { // D Button
    analogWrite(9, 64);
    analogWrite(10, 255);
    analogWrite(11, 192);
  }
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  if (digitalRead(6) == LOW) {  // 3 Button
    analogWrite(9, 64);
    analogWrite(10, 0);
    analogWrite(11, 64);
  }
  else if (digitalRead(7) == LOW) {  // 6 Button
    analogWrite(9, 64);
    analogWrite(10, 0);
    analogWrite(11, 192);
  }
  else if (digitalRead(8) == LOW) {  // 9 Button
    analogWrite(9, 64);
    analogWrite(10, 255);
    analogWrite(11, 192);
  }
  else if (digitalRead(12) == LOW) {  // # Button
    analogWrite(9, 64);
    analogWrite(10, 255);
    analogWrite(11, 0);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  if (digitalRead(6) == LOW) {  // 2 Button
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 192);
  }
  else if (digitalRead(7) == LOW) { // 5 Button
    analogWrite(9, 64);
    analogWrite(10, 64);
    analogWrite(11, 192);
  }
  else if (digitalRead(8) == LOW) {  // 8 Button
    analogWrite(9, 0);
    analogWrite(10, 64);
    analogWrite(11, 255);
  }
  else if (digitalRead(12) == LOW) {  // 0 Button
    analogWrite(9, 64);
    analogWrite(10, 255);
    analogWrite(11, 01);
  }
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  if (digitalRead(6) == LOW) {  // 1 Button
    analogWrite(9, 95);
    analogWrite(10, 255);
    analogWrite(11, 0);
  }
  else if (digitalRead(7) == LOW) {  // 4 Button
    analogWrite(9, 0);
    analogWrite(10, 195);
    analogWrite(11, 12);
  }
  else if (digitalRead(8) == LOW) {  // 7 Button
    analogWrite(9, 55);
    analogWrite(10, 0);
    analogWrite(11, 55);
  }
  else if (digitalRead(12) == LOW) {  // * Button
    analogWrite(9, 255);
    analogWrite(10, 255);
    analogWrite(11, 255);
  }
  digitalWrite(5, HIGH);
}
