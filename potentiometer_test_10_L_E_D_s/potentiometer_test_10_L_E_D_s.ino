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
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

// This is a test for arduino. 
//I just wanted to try this.

void show_lights(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10)
{
  digitalWrite(1, pin1);
  digitalWrite(2, pin2);
  digitalWrite(3, pin3);
  digitalWrite(4, pin4);
  digitalWrite(5, pin5);
  digitalWrite(6, pin6);
  digitalWrite(7, pin7);
  digitalWrite(8, pin8);
  digitalWrite(9, pin9);
  digitalWrite(10, pin10);
  delay(val);
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 1000);
  
  show_lights(HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH);
  show_lights(LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW);
  show_lights(LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW);
}


  
  
  
    
