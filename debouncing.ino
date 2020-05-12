int press=0;
int var;
void setup() {
pinMode(6, INPUT_PULLUP);
pinMode(7, OUTPUT);
}

void loop() {
var= digitalRead(6);
delay(100);
var = digitalRead(6);
if(!var){ //pressed
  press = !press;
  if(press)
  digitalWrite(7,HIGH);
  else
  digitalWrite(7,LOW);
  
  }
}
