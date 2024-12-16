void setup(){
  for(int i=0; i<= 4; i++){
    pinMode(i,OUTPUT);
  }
  pinMode(LED_BUILTIN,OUTPUT);
}
void loop(){
  digitalWrite(LED_BUILTIN,HIGH);
  for(int i = 0; i <= 4; i++){
    digitalWrite(i,HIGH);
    delay(500);
  }
  for(int i=0;i<=4;i++){
    digitalWrite(i,LOW);
    delay(500);
  }
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
}
