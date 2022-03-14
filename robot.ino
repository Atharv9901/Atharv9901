//const int DcmotorE1=13;
const int DcmotorA1=13;
const int DcmotorB1=12;

//const int DcmotorE2=10;
const int DcmotorA2=11;
const int DcmotorB2=10;
const int COM_a=9; 
const int COM_b=8;
const int COM_c=7;
const int COM_d=6;



const int SW1=5;
const int SW2=4;
const int SW3=3;
const int SW4=2;

//const int LEDL=3;
//const int LEDR=2;
int i=0;
int F=0;
int R=0;
int L=0;
int W=0;

void setup() {
  
//pinMode(DcmotorE1,OUTPUT);
pinMode(DcmotorA1,OUTPUT);
pinMode(DcmotorB1,OUTPUT);

//pinMode(DcmotorE2,OUTPUT);
pinMode(DcmotorA2,OUTPUT);
pinMode(DcmotorB2,OUTPUT);

pinMode(SW1,INPUT);
pinMode(SW2,INPUT);
pinMode(SW3,INPUT);
pinMode(SW4,INPUT);

//pinMode(LEDL,OUTPUT);
//pinMode(LEDR,OUTPUT);

pinMode(COM_a, OUTPUT);
pinMode(COM_b, OUTPUT);
pinMode(COM_c, OUTPUT);
pinMode(COM_d, OUTPUT);


}

void loop() {

F =digitalRead(SW1);
R=digitalRead(SW2);
L=digitalRead(SW3);
W=digitalRead(SW4);
 if(F==HIGH)
 {
//digitalWrite(DcmotorE1,HIGH);
digitalWrite(DcmotorA1,HIGH);
digitalWrite(DcmotorB1,LOW);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,HIGH);
digitalWrite(DcmotorB2,LOW);

for(i=0;i<100;i++)
 {
 digitalWrite(COM_a,HIGH);
 digitalWrite(COM_b,LOW);
 digitalWrite(COM_c,LOW);
 digitalWrite(COM_d,HIGH);
 delay(10);

 digitalWrite(COM_a,HIGH);
 digitalWrite(COM_b,HIGH);
 digitalWrite(COM_c,LOW);
 digitalWrite(COM_d,LOW);
 delay(10);

 digitalWrite(COM_a,LOW);
 digitalWrite(COM_b,HIGH);
 digitalWrite(COM_c,HIGH);
 digitalWrite(COM_d,LOW);
 delay(10);  

 digitalWrite(COM_a,LOW);
 digitalWrite(COM_b,LOW);
 digitalWrite(COM_c,HIGH);
 digitalWrite(COM_d,HIGH);
 delay(10);
}
 

  for(i=0;i<100;i++)
 {

digitalWrite(COM_a,HIGH);
 digitalWrite(COM_b,LOW);
 digitalWrite(COM_c,LOW);
 digitalWrite(COM_d,HIGH);
 delay(10);

 digitalWrite(COM_a,LOW);
 digitalWrite(COM_b,LOW);
 digitalWrite(COM_c,HIGH);
 digitalWrite(COM_d,HIGH);
 delay(10);

 digitalWrite(COM_a,LOW);
 digitalWrite(COM_b,HIGH);
 digitalWrite(COM_c,HIGH);
 digitalWrite(COM_d,LOW);
 delay(10);
 
 digitalWrite(COM_a,HIGH);
 digitalWrite(COM_b,HIGH);
 digitalWrite(COM_c,LOW);
 digitalWrite(COM_d,LOW);
 delay(10);
}

digitalWrite(DcmotorA1,LOW);
digitalWrite(DcmotorB1,LOW);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,LOW);
digitalWrite(DcmotorB2,LOW);
delay(1000);
}

   


 if(R==HIGH)
 {
// digitalWrite(DcmotorE1,HIGH);
digitalWrite(DcmotorA1,LOW);
digitalWrite(DcmotorB1,HIGH);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,LOW);
digitalWrite(DcmotorB2,HIGH);
delay(3000);
digitalWrite(DcmotorA1,LOW);
digitalWrite(DcmotorB1,LOW);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,LOW);
digitalWrite(DcmotorB2,LOW);
delay(1000);
   
}

L=digitalRead(SW3);
if(L==HIGH)
{
//digitalWrite(DcmotorE1,HIGH);
digitalWrite(DcmotorA1,LOW);
digitalWrite(DcmotorB1,HIGH);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,HIGH);
digitalWrite(DcmotorB2,LOW);

delay(3000);
digitalWrite(DcmotorA1,LOW);
digitalWrite(DcmotorB1,LOW);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,LOW);
digitalWrite(DcmotorB2,LOW);
delay(1000);

}
W=digitalRead(SW4);
if(W==HIGH)
{
//digitalWrite(DcmotorE1,HIGH);
digitalWrite(DcmotorA1,HIGH);
digitalWrite(DcmotorB1,LOW);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,LOW);
digitalWrite(DcmotorB2,HIGH);
delay(3000);
digitalWrite(DcmotorA1,LOW);
digitalWrite(DcmotorB1,LOW);

//digitalWrite(DcmotorE2,HIGH);
digitalWrite(DcmotorA2,LOW);
digitalWrite(DcmotorB2,LOW);
delay(1000);

//digitalWrite(LEDL,HIGH);
}
} 
