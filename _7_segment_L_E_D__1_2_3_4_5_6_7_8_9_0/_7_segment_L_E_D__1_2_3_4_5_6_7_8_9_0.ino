int potpin = 0;
int val;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void show_number(int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8)
{
   val = analogRead(potpin);
   val = map(val, 0, 1023, 0, 9);
   digitalWrite(2, pin2);
   digitalWrite(3, pin3);
   digitalWrite(4, pin4);
   digitalWrite(5, pin5);
   digitalWrite(6, pin6);
   digitalWrite(7, pin7); 
   digitalWrite(8, pin8);  
}

 void loop()
 {
 if (val == 0)
 {
   show_number(HIGH,  LOW, HIGH, HIGH, HIGH, HIGH, HIGH);
 }
  if (val == 1)
  {
   show_number( LOW,  LOW,  LOW,  LOW, LOW, HIGH,  HIGH);
  }
 if (val == 2)
{ 
   show_number( LOW, HIGH, HIGH, HIGH,  HIGH, HIGH, LOW);
}
if (val == 3)
{
   show_number( LOW, HIGH,  LOW, HIGH, HIGH, HIGH, HIGH);
}
if (val == 4)
{
   show_number(HIGH, HIGH,  LOW,  LOW, LOW, HIGH,  HIGH); 
}
if (val == 5)
{
   show_number(HIGH, HIGH,  LOW, HIGH, HIGH,  LOW, HIGH); 
}
 if (val == 6)
 {
   show_number(HIGH, HIGH, HIGH, HIGH, HIGH,  LOW, HIGH); 
 }
  if (val == 7)
   {
   show_number( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH); 
   }
   if (val == 8)
   {
   show_number(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH); 
   }
   if (val == 9)
   {
   show_number(HIGH, HIGH,  LOW, HIGH, HIGH, HIGH, HIGH);
   }
   
 }
