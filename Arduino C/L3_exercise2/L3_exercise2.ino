int val;

void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  val = analogRead(A1) / 4;
  analogWrite(9, val);
  analogWrite(10, val);
  analogWrite(11, val);
  Serial.print("A1: ");
  Serial.println(val);
  // put your main code here, to run repeatedly:

}
