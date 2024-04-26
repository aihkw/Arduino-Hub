#include<Servo.h>
Servo Myservo;
int pos;
int servoPin = 3; // DIGITAL
int delayBetweenSpin = 1;
void setup()
{
  Myservo.attach(servoPin);
}

void loop()
{
  for (pos = 0; pos <= 180; pos++) {
    Myservo.write(pos);
    delay(1);
  }
  delay(delayBetweenSpin);

  for (pos = 180; pos >= 0; pos--) {
    Myservo.write(pos);
    delay(1);
  }
  delay(delayBetweenSpin);
}
