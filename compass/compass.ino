#include <Wire.h>

#define Addr 0x1E              

void setup() {
  Serial.begin(9600);
  delay(100);                   
  Wire.begin();
  

  Wire.beginTransmission(Addr); 
  Wire.write(byte(0x02));
  Wire.write(byte(0x00));
  Wire.endTransmission();
}

void loop() {
  int x, y, z;


  Wire.beginTransmission(Addr);
  Wire.write(byte(0x03));       
  Wire.endTransmission();

  Wire.requestFrom(Addr, 6);    
  if(Wire.available() <=6) {    
    x = Wire.read() << 8 | Wire.read();
    z = Wire.read() << 8 | Wire.read();
    y = Wire.read() << 8 | Wire.read();
  }
  

  Serial.print("X=");
  Serial.print(x);
  Serial.print(", Y=");
  Serial.print(y);
  Serial.print(", Z=");
  Serial.println(z);
  
  delay(500);
}
