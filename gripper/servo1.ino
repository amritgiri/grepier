#include<Servo.h>
Servo myservo;
int input;
int o=30;
int c=90;
void setup() {
  myservo.attach(10);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0){
    input=Serial.read();
    if(input=='a'){
     
  myservo.write(o);
  delay(500);}
  if(input=='b'){
  
  myservo.write(c);
  delay(500);
  // put your main code here, to run repeatedly:
    }
}}
