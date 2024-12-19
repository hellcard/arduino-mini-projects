void setup(){
  for(int led_i = 2; led_i <= 8; led_i++){
    pinMode(led_i, OUTPUT);
  }
}
void loop(){
  const int t = 1000; 
  for(int led_i = 2; led_i <= 8; led_i++){
    digitalWrite(led_i, HIGH);
    delay(t);
    digitalWrite(led_i, LOW);
    delay(t);
  }
}
