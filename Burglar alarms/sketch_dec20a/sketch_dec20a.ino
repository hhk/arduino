
void setup()  
{
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
};

void loop() {
 if (digitalRead(3) == LOW){
   Serial.println("Alarm 1 Activated");
 }
if (digitalRead(5) == LOW){
  Serial.println("Alarm 2 Activated");
 }
} 
