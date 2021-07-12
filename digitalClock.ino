#include<LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);// rs, en, db4-7
unsigned long start_time=0;

void setup() {
Serial.begin(9600);
start_time= millis(); 
}
uint8_t ss = 0, mm = 0, hh = 0;
void loop() {
  if((millis()-start_time)>=1000){
    start_time= millis(); 
    ss +=1;
    if (ss == 60){
    ss = 0;
    mm +=1;
    if (mm == 60){
      mm = 0;
      hh +=1;
      if (hh == 24){
        hh = 0;
      }
    }
  }
  Serial.print(hh);
  Serial.print(":");
  Serial.print(mm);
  Serial.print(":");
  Serial.println(ss);
  }
  // display
  
  lcd.setCursor(0, 1);
  if (hh < 10){
    lcd.print(0);
  }
  lcd.print(hh);
  lcd.print(":");
  if (mm < 10){
    lcd.print(0);
  }
  lcd.print(mm);
  lcd.print(":");
  if (ss < 10){
    lcd.print(0);
  }
  lcd.print(ss);
}
