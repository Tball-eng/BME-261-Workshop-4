#include <Servo.h>

Servo myservo1;
int currentPosition = 0; 

void setup() {
  Serial.begin(9600);

  // === Setup Code for Part 1 (a) === //
  myservo1.attach(11); //configure digital pin 11 to control the servo
  myservo1.write(0);
  delay(1500);
}

void posServo(){
  int num = Serial.parseInt();
    Serial.println(num);
    myservo1.write(num);
    delay(100);
}
  

void loop() {
  posServo(); //For Position Servo
  delay(5);

}
