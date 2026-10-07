#include <Servo.h>

Servo servo;

void setup(){
  servo.attach(2);
}
void loop(){
  servo.write(20);
  delay(2500);
  servo.write(40);
  delay(2500);
  servo.write(180);
  delay(2500);
}