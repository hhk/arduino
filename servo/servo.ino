//are this program right?
#include <servo.h>
servo servo;
void setup()
{
  servo attach(3, 500, 2500);
  serial begin(9600);
}

void loop()
{
  int sensorValue = analogRead (A5);
  int digitalValue  = (int) (180* sensorValue/1024.0);
  servoWrite(digitalValue);
  serial.print(sensorValue);
  serial.print(  );
  serial.println(digitalValue);
}
