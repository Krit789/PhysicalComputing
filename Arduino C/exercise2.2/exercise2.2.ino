// C++ code
//

int starttime, endtime;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    digitalWrite(12, HIGH);
    sevenSegSix();
    delay(1);
    digitalWrite(12, LOW);

    digitalWrite(13, HIGH);
    sevenSegFive();
    delay(1);
    digitalWrite(13, LOW);

    endtime = millis();
  }

  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    digitalWrite(12, HIGH);
    sevenSegZero();
    delay(1);
    digitalWrite(12, LOW);

    digitalWrite(13, HIGH);
    sevenSegSeven();
    delay(1);
    digitalWrite(13, LOW);

    endtime = millis();
  }

  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    digitalWrite(12, HIGH);
    sevenSegZero();
    delay(1);
    digitalWrite(12, LOW);

    digitalWrite(13, HIGH);
    sevenSegZero();
    delay(1);
    digitalWrite(13, LOW);

    endtime = millis();
  }

  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    digitalWrite(12, HIGH);
    sevenSegFour();
    delay(1);
    digitalWrite(12, LOW);

    digitalWrite(13, HIGH);
    sevenSegSix();
    delay(1);
    digitalWrite(13, LOW);

    endtime = millis();
  }
}

void sevenSegSix() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void sevenSegFive() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void sevenSegFour() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void sevenSegThree() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void sevenSegZero() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void sevenSegSeven() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}
