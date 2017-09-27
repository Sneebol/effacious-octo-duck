/*

Wink Robot:  FunStuff  Rev01.01  12/2015

This code includes various "animation" things Wink can do. For example, sounds,
lighting sequences, dance moves, etc. Users are encouraged to build their own
"animations" and share their work on the forum.  http://forum.plumgeek.com/

This code was written by Kevin King and 
Dustin Soodak for Plum Geek LLC.
Portions from other open source projects where noted.
This code is licensed under:
Creative Commons Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0)
https://creativecommons.org/licenses/by-sa/2.0/

Visit http://www.plumgeek.com for Wink information.
Visit http://www.arduino.cc to learn about the Arduino.

*/

#include <stdint.h>
#include "FunStuff.h"


// ***************************************************
// Short Animations
// ***************************************************





// ***************************************************
// end Short Animations
// ***************************************************


void printLineSensors(void) {
  Serial.print("left.outersOn:  "); Serial.print(left.outersOn); Serial.print("\t");
  Serial.print("left.innersOn:  "); Serial.print(left.innersOn); Serial.print("\t");
  Serial.print("right.innersOn: "); Serial.print(right.innersOn); Serial.print("\t");
  Serial.print("right.outersOn: "); Serial.print(right.outersOn); Serial.print("\t");
  Serial.print("\n");

}





void set_IRs (uint8_t llo,uint8_t lli,uint8_t lri,uint8_t lro) {
  // Switch IR Light Sources on and off.
  digitalWrite(LineLeftOuter,llo);
  digitalWrite(LineLeftInner,lli);
  digitalWrite(LineRightInner,lri);
  digitalWrite(LineRightOuter,lro);
  
}



void readLineS (void) {
  // Traditional sequence of measuring sensor values
  // of measuring first with all IR lights off, then
  // with outers on, then with inners on.
  
  //measure sensor values with all IR sources off.
  set_IRs(LOW,LOW,LOW,LOW);
  delay(1);
  left.allOff = analogRead(LineSenseLeft);
  right.allOff = analogRead(LineSenseRight);

  //measure with outers on
  set_IRs(HIGH,LOW,LOW,HIGH);
  delay(1);
  left.outersOn = analogRead(LineSenseLeft) - left.allOff;
  right.outersOn = analogRead(LineSenseRight) - right.allOff;

  //measure with inners on
  set_IRs(LOW,HIGH,HIGH,LOW);
  delay(1);
  left.innersOn = analogRead(LineSenseLeft) - left.allOff;
  right.innersOn = analogRead(LineSenseRight) - right.allOff;
  
}






