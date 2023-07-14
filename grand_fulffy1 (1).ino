// C++ code
//
int led1 = 9;
int led2 = 10;
int led3 = 11;
int button = 5;
int count = 0;
int A= 0;
int B= 0;
void setup()
{
  pinMode(led1 , OUTPUT);
 pinMode(led2 , OUTPUT);
 pinMode(led3 , OUTPUT);
pinMode(button, INPUT);
}

void loop()
{
A= digitalRead(5);
  if (A!=B){
if (A==HIGH){
    count++;}
}
 B=A;
  if(count==1){
    digitalWrite (11,HIGH);}
    if(count==2){
      digitalWrite (10,HIGH);}
    if(count==3){
      digitalWrite (9,HIGH);}
  if(count==4){
    count=0;
      digitalWrite (11,LOW);
        digitalWrite (10,LOW);
        digitalWrite (9,LOW);
  }}