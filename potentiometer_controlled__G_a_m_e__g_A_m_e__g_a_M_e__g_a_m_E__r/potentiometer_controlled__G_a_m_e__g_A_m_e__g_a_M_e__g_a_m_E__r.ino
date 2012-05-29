int potpin = 0;
int val;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

//
// Send in four values, and set each input the the correct value.
//
void show_lights(int pin1, int pin2, int pin3, int pin4)
{
  digitalWrite(1, pin1);
  digitalWrite(2, pin2);
  digitalWrite(3, pin3);
  digitalWrite(4, pin4);
  delay(val);
}

  // This is just an example. It doesn't do anything.   
int add(int a, int b)
{
  return a + b;
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 1000);
  
  show_lights(HIGH, LOW, LOW, LOW);
  show_lights(LOW, HIGH, LOW, LOW);
  show_lights(LOW, LOW, HIGH, LOW);
  show_lights(LOW, LOW, LOW, HIGH);
  show_lights(LOW, LOW, HIGH, LOW);
  show_lights(LOW, HIGH, LOW, LOW);

  // This is just an example. It doesn't do anything.   
  int x = add(3, 4);
}

