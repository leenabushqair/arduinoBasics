#include <VarSpeedServo.h>
VarSpeedServo v;
int angle;
void setup() {
pinMode(A1,INPUT);
v.attach(9);
}

void loop() {
int d=analogRead(A1);
int data=map(d,0,1023,1,255);
int ang=v.read();
if(ang == 180){
angle = 0;
}
else if( ang == 0){
angle = 180;
}
v.write(angle,data,true);

}
