
#ifndef BLINKS_H
#define BLINKS_H

// Index of blink sequences.
byte seqIndex;

// Sets eye colors and waits.
extern void eyes(byte lr, byte lg, byte lb,byte rr, byte rg, byte rb, byte d);

// Blinks white.
extern void blinkBothOnoff_White(void);
extern void blinkBothOnoff_Funky(void);
extern void blinkGradualOpposites_RG(void);

#endif
