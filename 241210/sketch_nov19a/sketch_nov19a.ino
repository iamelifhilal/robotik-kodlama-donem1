// C++ code
//
int kirmizi=2;
int beyaz=3;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(2,0);
  digitalWrite(3,1);
  delay(100);
}