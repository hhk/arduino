#include <Servo.h>


Servo myservo;

void setup()
{
  myservo.attach(3,640,2330);
}


void loop()
{
  int sensorValue = analogRead(5);
  int digitalValue = map(sensorValue, 0, 1023, 0, 180);
  myservo.write(digitalValue);
}
