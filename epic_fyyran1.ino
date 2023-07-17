// C++ code
int led = 3;
int readpin = A2;
int readvalue;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(readpin, INPUT);
}

void loop()
{
readvalue = analogRead(readpin);
  analogWrite(led, readvalue*255. / 1023.);
  
}