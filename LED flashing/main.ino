int led = 13; // indicate that the LED is connected to output 13
void setup(){ // initialize the built-in LED and connected
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop(){
  digitalWrite(led,HIGH); // ON 13 led
  delay(100);
  digitalWrite(LED_BUILTIN,HIGH); // ON built-in led
  delay(1000);
  digitalWrite(led,LOW); // OFF 13 led
  delay(100);
  digitalWrite(LED_BUILTIN,LOW); // OFF built-in led
  delay(1000);
  // both LEDs flash simultaneously
}
