/*

Wink Robot
Wink_BaseSketch_Rev01_03
Version 1.3 01/2016

This is a basic sketch that can be used as a starting point
for various functionality of the Wink robot.

This code was written by Kevin King and
Dustin Soodak for Plum Geek LLC.
Portions from other open source projects where noted.
This code is licensed under:
Creative Commons Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0)
https://creativecommons.org/licenses/by-sa/2.0/
Visit http://www.plumgeek.com for Wink information.
Visit http://www.arduino.cc to learn about the Arduino.

*/

#include "WinkHardware.h"  // Hardware libraries


// Below is the "setup" function. It runs one time as soon as Wink turns on.

void setup(){
  hardwareBegin();        //initialize Wink's brain to work with his circuitry
  readLineS();       //make initial measurements
  printLineSensors();     //prints sensvals
  delay(200);
  tresh = 300;
  hasFoundDarkness = 0;   //indicates he hasn't found a dark surface yet

}


// Whatever is included inside the "loop" function will run over and over
// until Wink runs out of power or you turn him off.
          
void loop(){

  printLineSensors();

  readLineS();

  if(left.innersOn < tresh || left.outersOn < tresh){
    hasFoundDarkness = 1;
  }
  
  else if(right.innersOn < tresh || right.outersOn < tresh){
    hasFoundDarkness = 1;
  }

  else {
    motors(69,69);
  }

  if(hasFoundDarkness == 1){
    motors(0,0);
    waitForButton();
  }




} 






