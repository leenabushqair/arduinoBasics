void setup() {

pinMode(8, OUTPUT); 
pinMode(7, INPUT); 
Serial.begin(9600);

}

void loop() {
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);
//  delayMicroseconds(2);
  int timee= pulseIn(7,HIGH);
  int distance= timee*0.034/2;
  Serial.println(distance);
  

}
