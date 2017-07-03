#include <Servo.h> 
 
Servo myservo;  
Servo myservo2;        
 

void setup() 
{ 
  myservo.attach(0);
  myservo2.attach(10);
  myservo.write(35);
  myservo2.write(70);
  delay(10000);
  delay(300);
  
   myservo.write(30);
   for(int i = 0; i<2; i++){
    delay(500);
    
    myservo2.write(76);
    myservo.write(35);
    delay(500);
    myservo2.write(70);
    myservo.write(30);
    delay(500);
    myservo2.write(76);
    myservo.write(35);
    delay(500);
    myservo2.write(70);
    myservo.write(30);
    delay(500);
    myservo2.write(76);
    myservo.write(35);
    delay(500);
    myservo2.write(70);
    myservo.write(30);
    delay(500);
    myservo2.write(76);
    myservo.write(35);
    delay(500);
    myservo2.write(70);
    myservo.write(30);
   }
    delay(150);
    myservo.write(35);
    delay(150);
    myservo2.write(76);
    myservo.write(30);
    delay(150);
    myservo2.write(70);
    myservo.write(35);
    delay(150);
} 
 
void loop() 
{ 
    for(int i =0; i<8;i++){
      myservo2.write(76);
      delay(150);
      myservo2.write(70);
      myservo.write(30);
      delay(150);
      myservo2.write(76);
      myservo.write(35);
      delay(150);
      myservo2.write(70);
      delay(150);
      myservo2.write(76);
      delay(150);
      myservo2.write(70);
      delay(150);
      myservo2.write(76);
      delay(150);
      myservo2.write(70);
      myservo.write(30);
      delay(150);
      myservo2.write(76);
      myservo.write(35);
      delay(150);
      myservo2.write(70);
      delay(150);
      myservo2.write(76);
      delay(150);
      myservo2.write(70);
      delay(150);
      myservo2.write(76);
      delay(150);
      myservo2.write(70);
      myservo.write(30);
      delay(150);
      myservo2.write(76);
      myservo.write(35);
      delay(150);
      myservo2.write(70);
      delay(150);
    }
    
    delay(300);
    myservo.write(30);
    delay(300);
    myservo2.write(76);
    myservo.write(35);
    delay(300);
    myservo2.write(70);
    myservo.write(30);
    delay(300);
    myservo2.write(76);
    myservo.write(35);
    delay(300);
    myservo2.write(70);
    delay(300);
    myservo2.write(76);
    myservo.write(30);
    delay(150);
    myservo2.write(70);
    myservo.write(35);
    delay(150);        
} 

