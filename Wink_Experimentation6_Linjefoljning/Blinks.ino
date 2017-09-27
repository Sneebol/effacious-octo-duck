
#include "Blinks.h"


void eyes(byte lr, byte lg, byte lb, byte rr, byte rg, byte rb, byte d){
  // Sets a color configuration and waits. See dependencies.
  leftRGB(lr, lg, lb);
  rightRGB(rr, rg, rb);
  delay(d);
}

void blinkBothOnoff_White(void){
  // Simple white blink. See eyes();
  eyes(100,100,100, 100,100,100, 400);
  eyes(0,0,0, 0,0,0, 200);
}

void blinkBothOnoff_Funky(void){
  // Funky blink. See eyes();
  eyes(100,0,0, 0,100,0, 400);
  eyes(0,100,0, 0,0,100, 400);
  eyes(0,0,100, 100,0,0, 400);
}

void blinkGradualOpposites_RG(void){
  // Weird blink. See eyes();
  for (byte i=0; i<=100; i++){
    eyes(i,0,0, 0,100-i,0, 30);
  }
  for (byte i=0; i<=100; i++){
    eyes(100-i,0,0, 0,i,0, 30);
  }
}
