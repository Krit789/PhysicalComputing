void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
}

void loop() {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  if (digitalRead(3) == HIGH) {
    digitalWrite(9, LOW);
  } else {
    digitalWrite(9, HIGH);
  }
  
  if (digitalRead(5) == HIGH) {
    digitalWrite(10, LOW);
  } else {
    digitalWrite(10, HIGH);
  }
  
  if (digitalRead(6) == HIGH) {
    digitalWrite(11, LOW);
  } else {
    digitalWrite(11, HIGH);
  }


}
