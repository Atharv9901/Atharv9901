const int MA=13;
const int MB=12;
const int MC=11;
const int MD=10;
void setup()
{
  pinMode(MA,OUTPUT);
  pinMode(MB,OUTPUT);
  pinMode(MC,OUTPUT);
  pinMode(MD,OUTPUT);
  digitalWrite(MA,LOW);
  digitalWrite(MB,LOW);
  digitalWrite(MC,LOW);
  digitalWrite(MD,LOW);
}
void loop()
{
  digitalWrite(MA,HIGH);//1
  digitalWrite(MB,LOW);
  digitalWrite(MC,LOW);
  digitalWrite(MD,HIGH);
  delay(10);
  digitalWrite(MA,HIGH);//2
  digitalWrite(MB,HIGH);
  digitalWrite(MC,LOW);
  digitalWrite(MD,LOW);
  delay(10);
  digitalWrite(MA,LOW);//3
  digitalWrite(MB,HIGH);
  digitalWrite(MC,HIGH);
  digitalWrite(MD,LOW);
  delay(10);
  digitalWrite(MA,LOW);//4
  digitalWrite(MB,LOW);
  digitalWrite(MC,HIGH);
  digitalWrite(MD,HIGH);
  delay(10);
}
