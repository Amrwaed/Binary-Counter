// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
   pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(8, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 1000 millisecond(s)
    digitalWrite(8, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 1000 millisecond(s)
   digitalWrite(8, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(0); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
  
  
  
  
   
 
 
}