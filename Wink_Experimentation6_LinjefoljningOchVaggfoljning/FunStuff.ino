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
// General Comments - READ ME
// ***************************************************


// For an explanation on the variables used here,
// please refer to the header file FunStuff.h.

// All sensors carry their respective abbreviation trunks.
// The first two letters indicate the type 
//     - lS for line sensor, aS for ambient sensor

// The next letter indicates the position of the sensor relative to the direction of the Wink
//     - whether the sensor is positioned Left, Center, or Right, respectively.


// Ambient sensor values are abbreviated like e.g. aSC_hOff. Abbreviation parts in order:
// 1st - aS, for ambient light sensor.
// 2nd - L, C, or R for left, center, or right sensor.
// 3rd - hOn, hOff, base or tresh.
//     * hOn or hOff indicate whether headlight is on, or off.
//     * base for baseline.
//     * tresh for treshold.

// Line sensor is abbreviated, with parts in order:
// 1st lS, for line sensor
// 2nd 



// ***************************************************
// end General Comments
// ***************************************************




// ***************************************************
// Short Animations
// ***************************************************





// ***************************************************
// end Short Animations
// ***************************************************


void printLineSensors(void) {
  Serial.print("aSLeft_hOff:  "); Serial.print(aSLeft_hOff); Serial.print("\t");
  Serial.print("ambientSensorLeft_hOn:  ");  Serial.print(aSLeft_hOn); Serial.print("\t");
  Serial.print("aScenterhOff:  ");  Serial.print(aSCenter_hOff); Serial.print("\t");
  Serial.print("aScenterhOn:  ");    Serial.print(aSCenter_hOn); Serial.print("\t");
  Serial.print("aSRight_hOff: "); Serial.print(aSRight_hOff); Serial.print("\t");
  Serial.print("aSRight_hOn: ");  Serial.print(aSRight_hOn); Serial.print("\t");
  Serial.print("\n");

}




void readAmbientSensors (void) {
  // Sequence of measuring each ambient sensor from left to right,
  // first with the headlight off, then with the headlight on,
  // to see the difference between no headlight reflection and full headlight reflection.
  
  
  //digitalWrite(Headlight, LOW);  delay(1); aSLeft.headlightOff   = analogRead(AmbientSenseLeft);
  
  int aleftTresh   = findAmbientTresh(AmbientSenseLeft);
  
  int acenterTresh = findAmbientTresh(AmbientSenseCenter);

  int arightTresh  = findAmbientTresh(AmbientSenseRight);
}


int readAmbientSensor (uint8_t headlight1, uint8_t pos){
  // Set headlight on or off, and measure the sensor
  // value of the sensor at position pos.

  digitalWrite(Headlight, headlight1);
  delay(1);
  return analogRead(pos);
}


int findAmbientTresh (uint8_t pos){
  // Reads an ambient sensor with the headlight off, then on,
  // and sets the difference between the two plus a constant,
  // as a baseline to be compared against.

  return (readAmbientSensor(HIGH,pos) - readAmbientSensor(LOW,pos) + buffercons);
}

