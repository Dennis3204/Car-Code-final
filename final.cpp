#include <Arduino.h>
#include <Servo.h>


Servo left;
Servo right;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

 
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);

  
  left.attach(13); //left
  right.attach(12); //right

  left.writeMicroseconds(1700); // left wheel clockwise
  right.writeMicroseconds(1300); // right wheel clockwise

  delay(7200);

  left.writeMicroseconds(1700);
  right.writeMicroseconds(1450);

  delay(300);

  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);

  delay(6350);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(300);

  //turn 

  left.writeMicroseconds(2000); // left wheel clockwise

  //delay(2350);

  delay(2400);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(800);

  //second line

  left.writeMicroseconds(1700); // left wheel clockwise
  right.writeMicroseconds(1300); // right wheel clockwise

  delay(2500);

  //veer
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1450);

  delay(600);

  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);

  delay(4750);

  //veer
  left.writeMicroseconds(1550);
  right.writeMicroseconds(1300);

  delay(200);

  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);

  delay(4750);

  //veer
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1450);

  delay(350);


  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);

  delay(5500);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(500);

  //second turn

  right.writeMicroseconds(1300); // left wheel clockwise

  delay(2150);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(800);

  //FINAL ONE!!!!!!!!!!!!!
  //third line 

  left.writeMicroseconds(1700); // left wheel clockwise
  right.writeMicroseconds(1300); // right wheel clockwise

  delay(5500);

  //veer
  left.writeMicroseconds(1550);
  right.writeMicroseconds(1300);

  delay(350);

  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);


  delay(7000);


  left.writeMicroseconds(1550);
  right.writeMicroseconds(1300);

  delay(350);


  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);


  delay(3000);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(500);
  
  //GOING BACKWORDS NOW!

  //FINAL ONE!!!!!!!!!!!!!
  //third line 

  left.writeMicroseconds(1300); // left wheel clockwise
  right.writeMicroseconds(1700); // right wheel clockwise

  delay(5500);

  //veer
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1450);

  delay(350);

  left.writeMicroseconds(1300);
  right.writeMicroseconds(1700);


  delay(7000);


  left.writeMicroseconds(1700);
  right.writeMicroseconds(1450);

  delay(350);


  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);


  delay(3000);

  left.writeMicroseconds(1700);
  right.writeMicroseconds(1450);

  delay(500);

  //second turn

  right.writeMicroseconds(1700); // left wheel clockwise

  delay(2200);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(800);

  //second line

  left.writeMicroseconds(1300); // left wheel clockwise
  right.writeMicroseconds(1700); // right wheel clockwise

  delay(2500);

  //veer
  left.writeMicroseconds(1550);
  right.writeMicroseconds(1300);

  delay(600);

  left.writeMicroseconds(1300);
  right.writeMicroseconds(1700);

  delay(4750);

  //veer
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1450);

  delay(200);

  left.writeMicroseconds(1300);
  right.writeMicroseconds(1700);

  delay(4750);

  //veer
  left.writeMicroseconds(1550);
  right.writeMicroseconds(1300);

  delay(350);


  left.writeMicroseconds(1300);
  right.writeMicroseconds(1700);

  delay(5500);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(500);

  //first turn 

  left.writeMicroseconds(1000); // left wheel clockwise

  //delay(2350);

  delay(2400);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(800);

  //first line

  left.writeMicroseconds(1300); // left wheel clockwise
  right.writeMicroseconds(1700); // right wheel clockwise

  delay(7200);

  left.writeMicroseconds(1550);
  right.writeMicroseconds(1300);

  delay(300);

  left.writeMicroseconds(1300);
  right.writeMicroseconds(1700);

  delay(6350);

  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);

  delay(300);
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello!");
  delay(1000);  


}


