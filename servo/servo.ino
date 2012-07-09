#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(3, 500, 2500);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead (A5);
  int digitalValue  = map(sensorValue, 0, 1023, 0, 180);
  servo.write(digitalValue);
  
  Serial.print(sensorValue);
  Serial.print("  ");
  Serial.println(digitalValue);
}

