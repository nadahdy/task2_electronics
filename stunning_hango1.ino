#include <Servo.h>

Servo myservo;
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5; 
Servo myservo6; 

int pos = 0; // variable to store the servo position

void setup() {
  myservo.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  myservo4.attach(12);
  myservo5.attach(13);
  myservo6.attach(8);
}

void loop() {
  // تحريك جميع السيرفوهات من 0 إلى 180
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(15);
  }

  // تحريك جميع السيرفوهات من 180 إلى 0
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(15);
  }
}