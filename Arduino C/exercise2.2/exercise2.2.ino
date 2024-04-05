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

void setup()
{
  pinMode(0, OUTPUT);  // g
  pinMode(1, OUTPUT);  // f
  pinMode(4, OUTPUT);  // a
  pinMode(5, OUTPUT);  // b
  pinMode(6, OUTPUT);  // e
  pinMode(7, OUTPUT);  // d
  pinMode(8, OUTPUT);  // c
  pinMode(9, OUTPUT);  // dp
  pinMode(12, OUTPUT); // 7-seg left
  pinMode(13, OUTPUT); // 7-seg left
}

void loop()
{
  int starttime = millis(), endtime;
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    showTwoDigits(10);
    endtime = millis();
  }

  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    showTwoDigits(29);
    endtime = millis();
  }

  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    showTwoDigits(86);
    endtime = millis();
  }

  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <= 1000)
  {
    showTwoDigits(90);
    endtime = millis();
  }
}

void showDigit(byte number)
{
  byte pin = 0;
  for (byte j = 0; j < 7; j++)
  {
    digitalWrite(pin, num_array[number][j]);
    pin++;
    if (pin == 2)
    {
      pin += 2;
    }
  }
}

void showTwoDigits(byte number)
{
  byte digits[2] = {(number / 10) % 10, number % 10};  
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  for (byte i = 0; i < 2; i++)
  {
    byte pin = 0;
    for (byte j = 0; j < 7; j++)
    {
      digitalWrite(pin, num_array[digits[i]][j]);
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
