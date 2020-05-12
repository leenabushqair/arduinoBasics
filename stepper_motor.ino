void setup() {
Serial.begin(9600);
DDRD = 0b11110000 | DDRD ;
}

void loop() {
long steps = Serial.parseInt();
steps =steps * 2048 / 360;
int i=0; // for shifiting
while(steps>0){
  // 0001 0010 0100 1000
  if(i==4) i=0;
  PORTD = (PORTD & 0b00001111) | ((1<<i) <<4);
  delay(4);
  i++;
  steps--;
}
}
//search arduino.cc for the stepper motor library 
