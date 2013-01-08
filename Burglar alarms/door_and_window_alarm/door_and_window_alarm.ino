void setup() 
{
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(3, INPUT);
};

void loop() {
  if (digitalRead(5) == LOW){
    delay(500);
    Serial.println("Window closed");
  }  
  else {
    delay(500);
    Serial.println("Window open WARNING!");
  }
  if (digitalRead(3) == LOW){
    delay(500);
    Serial.println("Door closed");
  }
  else {
    delay(500);
    Serial.println("Door open");
  }
}
