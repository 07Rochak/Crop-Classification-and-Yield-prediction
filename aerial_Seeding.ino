#include <Servo.h>

Servo myServo;  // create servo object to control a servo

int x=0;

void setup() {
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  // Rotate servo to 0 degrees
  if(x==0)
  {
    delay(10000);
    x=1;
  }
  myServo.write(0);
  delay(5000);  // wait for 5 seconds

  // Rotate servo to 180 degrees
  myServo.write(180);
  delay(5000);  // wait for 5 seconds
}
