int delaytime=2;
int angle=0;
#include <Servo.h>
Servo myservo;
void setup ()
{
  myservo.attach(11);
}
void loop (){
  while (angle <=180){
    myservo.write (angle);
    delay (delaytime);
    angle = angle + 1;
  }
  while (angle > 0){
    myservo.write (angle);
    delay (delaytime);
    angle = angle - 1;
  }
}
