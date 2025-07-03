#include <Servo.h>

Servo myservo2;
int currentPosition = 0; 

void setup() {
  Serial.begin(9600);

  // === Setup Code for Part 1 (b) === //
  myservo2.attach(9); //configure digital pin 9 to control the servo
  myservo2.write(93);
  delay(1000);
}

  
void rotServo(){
  
  int num = Serial.parseInt();
  Serial.println(num);
  delay(100);
  
  if (num == 0){
    myservo2.write(93);
    delay(1000);
  }
  
  else if ( 0 < num <= 100){
    myservo2.write(map(num, 0, 100, 93, 0));
    delay(1000);
  }
  
  else if ( -100 <= num < 0) {
    myservo2.write(map(num, -100, 0, 180, 93)); 
    delay(1000);
  }
 
}

void loop() {
  // Call the function for each part of the lab here to run
  rotServo(); //For Continuous Rotation Servo
  delay(5);

}
