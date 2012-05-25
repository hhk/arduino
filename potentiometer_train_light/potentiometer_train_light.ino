int potpin = 0;
int val;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 1000);
  digitalWrite(1, HIGH);
  digitalWrite(7, LOW);
  delay(val);
  digitalWrite(1, LOW);
  digitalWrite(7, HIGH);
  delay(val);
}

