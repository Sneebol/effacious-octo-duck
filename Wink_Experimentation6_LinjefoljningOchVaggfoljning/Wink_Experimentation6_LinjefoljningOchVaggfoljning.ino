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

// Motor speed constants
const int slow = 0;
const int fast = 100;
const int supersonic = 255;

// Ambient calculation constants
const int buffercons = 10;




// Below is the "setup" function. It runs one time as soon as Wink turns on.

void setup(){
  hardwareBegin();        //initialize Wink's brain to work with his circuitry.
  //readAmbientS();            //make initial measurements of ambient light sensors
  //printAmbientSensors();     //prints sensvals
  delay(200);
  tresh = 400;            //threshold for the light level of a surface to be considered dark

}


// Whatever is included inside the "loop" function will run over and over
// until Wink runs out of power or you turn him off.

void loop(){

  

//    printLineSensors();
//  
//    
//    motors(fast,fast);
//    readLineS();
//  
//    if      (left.innersOn < tresh || left.outersOn < tresh)   {hasFoundDarkness = 1;}
//    else if (right.innersOn < tresh || right.outersOn < tresh) {hasFoundDarkness = 2;}
//    else                                                       {hasFoundDarkness = 0;}
//  
//    if      (hasFoundDarkness == 1){ motors(slow,fast);}
//    else if (hasFoundDarkness == 2){ motors(fast,slow);}
//    else if (hasFoundDarkness == 0){ motors(fast,fast);}

}
