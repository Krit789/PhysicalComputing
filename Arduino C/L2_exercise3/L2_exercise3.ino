int inputNumber = 0;
char aChar;
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  resetDisplaySegment();
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0) {
    inputNumber = Serial.read();
    aChar = inputNumber;
    if (inputNumber != 10) {
      Serial.print("Displaying: ") ;
      Serial.println(aChar) ;
    }
  }
  switch (inputNumber) {
    case '0':
      displaySegment(LOW, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH); // 0
      break;
    case '1':
      displaySegment(LOW, LOW, LOW, HIGH, LOW, LOW  , HIGH); // 1
      break;
    case '2':
      displaySegment(HIGH, LOW, HIGH, HIGH, HIGH, HIGH, LOW); // 2
      break;
    case '3':
      displaySegment(HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH); // 3
      break;
    case '4':
      displaySegment(HIGH, HIGH, LOW, HIGH, LOW, LOW, HIGH); // 4
      break;
    case '5':
      displaySegment(HIGH, HIGH, HIGH, LOW, LOW, HIGH, HIGH); // 5
      break;
    case '6':
      displaySegment(HIGH, HIGH, HIGH, LOW, HIGH, HIGH, HIGH); // 6
      break;
    case '7':
      displaySegment(LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH); // 7
      break;
    case '8':
      displaySegment(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH); // 8
      break;
    case '9':
      displaySegment(HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH); // 9
      break;
    case 10:
      break;
    default:
      resetDisplaySegment();
  }
}

void displaySegment(int g, int f, int a, int b, int e, int d, int c) {
  digitalWrite(7, g);
  digitalWrite(8, f);
  digitalWrite(9, a);
  digitalWrite(10, b);
  digitalWrite(11, e);
  digitalWrite(12, d);
  digitalWrite(13, c);
}

void resetDisplaySegment() {
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}
