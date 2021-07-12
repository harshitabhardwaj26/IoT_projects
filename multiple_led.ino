void setup() {
  for(int i=4;i<=11;i++){
  pinMode(i,1); 
 }
}

void loop() {
 for(int i=0;i<=3;i++){
  digitalWrite(7-i,1);
  digitalWrite(8+i,1);
  delay(500);
}
 for(int i=3;i>=0;i--){
 digitalWrite(7-i,0);
 digitalWrite(8+i,0);
 delay(500);
 }
}
