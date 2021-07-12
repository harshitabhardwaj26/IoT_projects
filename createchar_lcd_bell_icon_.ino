#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

byte arrow[8] = {B00000,B00100,B01110,B01110,B11111,B00100,B00000,B00000};
void setup() {
 lcd.createChar(7,arrow);
 lcd.begin(20,4);
 lcd.setCursor(8,1);
 lcd.write(byte(7)); 
}

void loop(){

}
