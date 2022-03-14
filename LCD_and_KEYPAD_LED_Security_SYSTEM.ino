#include <Keypad.h>
#include<LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 7, d5 = 8, d6 = 9, d7 = 10,sw1=2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int i ,j=0;
char c;
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = 
{
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
char b[3] = {'1', '2', '3'};
char a[3];
byte rowPins[ROWS] = {11, 12, 13, 4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {2, 3, 14}; //connect to the column pinouts of the keypad a0=14
int LED1 = 15;
int BUZZ = 16;
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  lcd.begin(16,2) ; 
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  digitalWrite(LED1, LOW);
}
  
void loop(){
  //char key = keypad.getKey();
  lcd.setCursor(0,0);
  lcd.print("Enter password");
  delay(300);
 lcd.setCursor(0,1);
  for(i=0; i<3; )
  {
    c = keypad.getKey();
    
    if(c!=NULL)
    {
      a[i]=c;
     lcd.print('*');
     i++;
    }
  }

  for(i=0; i<3; i++ )
  {
    if(a[i] == b[i])
    {
     // lcd.print("test");
      j++;
    }
    
  }
  
  if(j==3)
  {
    lcd.setCursor(5,1);
   lcd.print("OPEN"); 
   digitalWrite(LED1, HIGH);
   
  }
 // if (key)
  else
  {
    lcd.setCursor(5,1);
       lcd.print("soorry"); 
       digitalWrite(LED1, LOW);
       digitalWrite(BUZZ, HIGH);
       delay(3000);

  }
}
