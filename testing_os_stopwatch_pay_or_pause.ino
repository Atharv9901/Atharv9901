const int SWITCH=2;
const int SWITCH1=3;
const int LEDA=13;
const int LEDB=12;
const int LEDC=11;
const int LEDD=10;
const int LEDE=9;
const int LEDF=8;
const int LEDG=7;
const int LEDZ=6;
      int itimes=100;
      int x=0;
      int y=0;
void setup()
{
  pinMode(LEDA,OUTPUT);
  pinMode(LEDB,OUTPUT);
  pinMode(LEDC,OUTPUT);
  pinMode(LEDD,OUTPUT);
  pinMode(LEDE,OUTPUT);
  pinMode(LEDF,OUTPUT);
  pinMode(LEDG,OUTPUT);
  pinMode(LEDZ,OUTPUT);
  pinMode(SWITCH,INPUT);
  pinMode(SWITCH1,INPUT);
  
}
void loop()
{
   x=digitalRead(SWITCH);
   
 if(x==HIGH)
 { 
  digitalWrite(LEDA,HIGH);//0
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,HIGH);
 digitalWrite(LEDE,HIGH);
 digitalWrite(LEDF,HIGH);
 digitalWrite(LEDG,LOW);
pdelay(1000);
 }
 if(x==HIGH) 
{
 digitalWrite(LEDA,LOW);//1          
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,LOW);
 digitalWrite(LEDE,LOW);
 digitalWrite(LEDF,LOW);
  digitalWrite(LEDG,LOW);
pdelay(1000);
} 
if(x==HIGH)
 {
 digitalWrite(LEDA,HIGH);//2
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,LOW);
 digitalWrite(LEDD,HIGH);
 digitalWrite(LEDE,HIGH);
 digitalWrite(LEDF,LOW);
  digitalWrite(LEDG,HIGH);
pdelay(1000);
 }
if(x==HIGH)
 {
 digitalWrite(LEDA,HIGH);//3
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,HIGH);
 digitalWrite(LEDE,LOW);
 digitalWrite(LEDF,LOW);
 digitalWrite(LEDG,HIGH);
pdelay(1000);
 }
if(x==HIGH)
{ 
 digitalWrite(LEDA,LOW);//4
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,LOW);
 digitalWrite(LEDE,LOW);
 digitalWrite(LEDF,HIGH);
 digitalWrite(LEDG,HIGH);
pdelay(1000);
}
if(x==HIGH)
 {
 digitalWrite(LEDA,HIGH);//5
 digitalWrite(LEDB,LOW);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,HIGH);
 digitalWrite(LEDE,LOW);
 digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
pdelay(1000);
 }
if(x==HIGH)
 {
 digitalWrite(LEDA,HIGH);//6
 digitalWrite(LEDB,LOW);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,HIGH);
 digitalWrite(LEDE,HIGH);
 digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
pdelay(1000);
 }
if(x==HIGH)
 {
 digitalWrite(LEDA,HIGH);//7
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,LOW);
 digitalWrite(LEDE,LOW);
 digitalWrite(LEDF,LOW);
  digitalWrite(LEDG,LOW);
pdelay(1000);
 }
if(x==HIGH)
 {
 digitalWrite(LEDA,HIGH);//8
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,HIGH);
 digitalWrite(LEDE,HIGH);
 digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
pdelay(1000);
 }
if(x==HIGH)
 {
 digitalWrite(LEDA,HIGH);//9
 digitalWrite(LEDB,HIGH);
 digitalWrite(LEDC,HIGH);
 digitalWrite(LEDD,HIGH);
 digitalWrite(LEDE,LOW);
 digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
pdelay(1000);
 
}
}
void pdelay(int itimes)
{
     for(int i=0; i<itimes; i++)
     for(int j=0; j<100;j++)
     {
        y=digitalRead(SWITCH1);
        if(y==HIGH)
        {
          while(1);
         
        }
     
     if(y==HIGH)
     {
      break;
     }
     }
}
