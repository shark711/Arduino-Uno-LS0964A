int wait_time = 0;

int counter;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  wait_time = 400;
  for (counter = 0; counter < 10; ++counter) {
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(11, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    analogWrite(9, 255);
    analogWrite(10, 255);
    analogWrite(11, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(11, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    wait_time += -40;
  }
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(300); // Wait for 300 millisecond(s)
}
