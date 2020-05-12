void setup() {
Serial.begin(9600);
DDRD= 0b11110000 | DDRD;
//pinMode(4, OUTPUT);
//pinMode(5, OUTPUT);
//pinMode(6, OUTPUT);
//pinMode(7, OUTPUT);
}

void loop() {
  long STEPS = Serial.parseInt();
    STEPS=STEPS*2048/360;
//  map(ang, 0,1023,0,2048);
int i = 0; 
while(STEPS>0){
if (i=4)
i=0;
PORTD =  0b00001111& PORTD | ((1<<i)<<4);
delay(4);
i++;
STEPS--;
}
}
