int led=9; // indicate that the LED is connected to output 13
int bright=1; // brightness initialization
int fade=5; // brightness frequency
void setup(){
  pinMode(LED_BUILTIN,OUTPUT); // init led built-in
  pinMode(led,OUTPUT); // init led on 9
}
void loop(){
  digitalWrite(LED_BUILTIN, HIGH); // ON led built-in
  analogWrite(led,bright); // brightness change
  bright = bright + fade; // brightness change
  if(bright>=255 || bright<=0){
    fade = -fade;
  }
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  delay(100);
}
// Within 10 milliseconds, the LED becomes brighter and the built-in LED flashes each time the LED brightness changes.
