// C++ code


#include <Servo.h>


int angel= 0;

Servo s1,s2,s3,s4,s5,s6;

void setup (){
  
 s1.attach(13);
 s2.attach(12);
 s3.attach(11);
 s4.attach(10);
 s5.attach(9);
 s6.attach(8);
  
}

void loop(){  
  
  ///move one/////
  for (angel= 0; angel <= 180; angel += 1) {
    s1.write(angel);
    s2.write(angel);
    s3.write(angel);
    s4.write(angel);
    s5.write(angel);
    s6.write(angel);
    delay(15);
  }
  
  for (angel= 180; angel >= 0; angel -= 1) {
    s1.write(angel);
    s2.write(angel);
    s3.write(angel);
    s4.write(angel);
    s5.write(angel);
    s6.write(angel);
     delay(15);
    
  }
   delay(3000);
    ////move two//
   for (angel= 0; angel <= 90; angel += 1) {
    s1.write(angel);
    s2.write(angel);
    s3.write(angel);
    s4.write(angel);
    s5.write(angel);
    s6.write(angel);
    delay(15);
  }
  
  for (angel= 90; angel >= 0; angel -= 1) {
    s1.write(angel);
    s2.write(angel);
    s3.write(angel);
    s4.write(angel);
    s5.write(angel);
    s6.write(angel);
     delay(15);
    
  }
  delay(3000);
    ////move Three //
   for (angel= 0; angel <= 60; angel += 1) {
    s1.write(angel);
    s2.write(angel);
    s3.write(angel);
    s4.write(angel);
    s5.write(angel);
    s6.write(angel);
    delay(15);
  }
  
  for (angel= 60; angel >= 0; angel -= 1) {
    s1.write(angel);
    s2.write(angel);
    s3.write(angel);
    s4.write(angel);
    s5.write(angel);
    s6.write(angel);
     delay(15);
    
  }
delay(3000);
}
