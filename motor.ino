#include<Servo.h>
 Servo myServo;


 const int servoPin=9;
 void setup()
 {
  myServo.attach(servoPin);
  
 }

void loop()
{
  
  for(int pos=0; pos<=180; pos+=1)
  {
  myServo.write(pos);
  delay(15);

  }
  
  for(int pos=0; pos>=0; pos-=1)
  {
  myServo.write(pos);
  delay(15);

}}
