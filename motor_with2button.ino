const byte mPins[2]  = {2, 3};//  uint8_t and byte
const byte button1 = 7;
const byte button2 = 8;
void setup() {
  for (int i = 0; i < 2; i++) {
    pinMode(mPins[i], OUTPUT);
  }
pinMode(button1, INPUT_PULLUP); 
pinMode(button2, INPUT_PULLUP); 
}
unsigned int count = 0;
void loop() {
    if (digitalRead(button1) == 0){
      while(digitalRead(button1)==0);
      count +=1;
    }
      if(count==1){
      digitalWrite(mPins[0], 0);
      digitalWrite(mPins[1], 1);
      delay(1000);
    } 
    if(count==2){
    digitalWrite(mPins[0], 0);
    digitalWrite(mPins[1], 0);
    delay(1000);
    } 
   if (digitalRead(button2) == 0){
   while(digitalRead(button2)==0); 
   digitalWrite(mPins[0], 1);
   digitalWrite(mPins[1], 0);
   delay(10000);
}
}
