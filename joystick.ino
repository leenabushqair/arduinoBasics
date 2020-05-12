void setup() {
pinMode(11, OUTPUT); //ENa
  pinMode(5, OUTPUT);  //1
  pinMode(6, OUTPUT);//2
  pinMode(9, OUTPUT); //3 
  pinMode(10, OUTPUT);//4
  pinMode(3, OUTPUT);//ENb
       pinMode (A0, INPUT) ;                     
  pinMode (A1, INPUT) ; 
  pinMode(13, OUTPUT);
//analogWrite(9, pwmOutput);
}

void loop() {
  int var;
  var1 = analogRead(A4);
  int data1=map(A4, 0, 1023, 0, 100);
  int var2 = analogRead(A5);
  int data2=map(A5, 0, 1023, 0, 100);
  Serial.println(data1);
 
analogRead()

  
}
