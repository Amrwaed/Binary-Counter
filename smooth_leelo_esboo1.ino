// C++ code
//Motor 1:
#define Ena 10
#define IN1 9
#define IN2 8
//Motor 2:
#define Enb 11
#define IN3 12
#define IN4 13
void setup()
{
  pinMode(Ena, OUTPUT);
   pinMode(IN1, OUTPUT);
   pinMode(IN2, OUTPUT);
   pinMode(Enb, OUTPUT);
   pinMode(IN2, OUTPUT);
   pinMode(IN4, OUTPUT);
}

void loop()
{
  //Motor 1:
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(Ena, 250);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(Enb, 250);
}