/*

Wink Robot:  FunStuff.h  Rev01.01  12/2015

This code includes various fun and animated things Wink can do. For example, sounds,
lighting sequences, dance moves, etc. Users are encouraged to build their own
"fun stuff" examples and share their work on the forum.  http://forum.plumgeek.com/

This code was written by Kevin King and 
Dustin Soodak for Plum Geek LLC.
Portions from other open source projects where noted.
This code is licensed under:
Creative Commons Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0)
https://creativecommons.org/licenses/by-sa/2.0/

Visit http://www.plumgeek.com for Wink information.
Visit http://www.arduino.cc to learn about the Arduino.

*/




#ifndef FUNSTUFF_H
#define FUNSTUFF_H


// ***************************************************
// Global Variables - Can be accessed from within any function
// ****************************************https://english.stackexchange.com/questions/339746/whats-the-word-for-unnecessary-complexity/339846***********

int presentSpeedRight, presentSpeedLeft;      //remembers present motor speed
char eyesColor[6];                            //holder array for present eye color
char eyesPrevColor[6];                        //holder array for previous eye color when changing eye color

// ***************************************************
// end Global Variables
// ***************************************************

// ***************************************************
// Short Animations
// ***************************************************


// ***************************************************
// end Short Animations
// ***************************************************

struct aS {
  int current;
  int hOff;
  int hOn;
  int base;
  int tresh;
};

int aSLeft_hOff;
int aSCenter_hOff;
int aSRight_hOff;
int aSLeft_hOn;
int aSCenter_hOn;
int aSRight_hOn;
int aSLeft_base;
int aSCenter_base;
int aSRight_base;
int aSLeft_tresh;
int aSCenter_tresh;
int aSRight_tresh;




struct aS left;
struct aS center;
struct aS right;




// Sensor value threshold for a black surface
int tresh;



#endif

