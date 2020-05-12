
void setup() {
  // put your setup code here, to run once:
pinMode(6, INPUT_PULLUP);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if( digitalRead(6) == HIGH){
  digitalWrite(13, LOW);
} 
else
  digitalWrite(13, HIGH);

}
