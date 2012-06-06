int potpin = 0;
int val;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void number(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7)
{
  digitalWrite(1, pin1);
  digitalWrite(2, pin2);
  digitalWrite(3, pin3);
  digitalWrite(4, pin4);
  digitalWrite(5, pin5);
  digitalWrite(6, pin6);
  digitalWrite(7, pin7);
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 9);
  if(val == 0);
    number(HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH);
  if (val == 1);
    number(LOW, LOW, LOW, LOW, HIGH, HIGH, LOW);
  if (val == 2);
    number(LOW, HIGH, HIGH, HIGH, LOW, HIGH, HIGH);
 if(val == 3);
    number(LOW, HIGH, LOW, HIGH, HIGH, HIGH, HIGH);
 if( val == 4);
    number(HIGH, HIGH, LOW, LOW, HIGH, HIGH, LOW);
   if(val == 5); 
    number(HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH);
 if( val == 6);
    number ( HIGH, HIGH, HIGH, HIGH, HIGH, LOW, HIGH);
 if(val == 7);
    number( LOW, LOW, LOW, LOW, HIGH, HIGH, HIGH);
   if(val == 8);
    number(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH);
  if(val == 9);
    number(HIGH, HIGH, LOW, LOW, HIGH, HIGH, HIGH);
}

