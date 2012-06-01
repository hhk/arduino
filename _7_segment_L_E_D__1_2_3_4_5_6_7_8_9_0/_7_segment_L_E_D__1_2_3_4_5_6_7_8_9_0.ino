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

void number(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8)
{
  digitalWrite(1, pin1);
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
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 1000);
  
  number(LOW, HIGH, HIGH, HIGH, LOW, LOW, LOW);
  number(HIGH, HIGH, HIGH, HIGH, HIGH,
