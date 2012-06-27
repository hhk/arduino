//are this program right?

// *Is* the program right? 
//
// * Capitalization is important and must be excatly right. 
// * Punctuation is important and has specialm meaning. It also has to be exactly right. 
// servo attach should be servo.attach for example (missing period).


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
  // We can use map() here to make it from 0 to 180. 
  // This does the same thing, but map() I think is more understandable. 
  int digitalValue  = (int) (180* sensorValue/1024.0);
  servoWrite(digitalValue);
  serial.print(sensorValue);
  // strings must be surrounded by double quotes (") so this should be " ".
  serial.print(  );
  serial.println(digitalValue);
}
