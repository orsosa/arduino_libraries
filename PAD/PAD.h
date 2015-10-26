#ifndef PAD_h
#define PAD_h
#include "Arduino.h"
#include "Adafruit_TFTLCD.h"
class PAD {
public:
int sizex,sizey, xoff,yoff,cursorx,cursory;
int textSize;
Adafruit_TFTLCD *tft;
PAD(Adafruit_TFTLCD *t):
    tft(t),sizex(t->width()),sizey(t->height()),xoff(0),yoff(0),cursorx(0),cursory(0),textSize(1){}
    
PAD(Adafruit_TFTLCD *t,int16_t sx,int16_t sy,int xo,int yo):
    tft(t),sizex(sx),sizey(sy),xoff(xo),yoff(yo),cursorx(xo),cursory(yo),textSize(1){}
int testprint();
int setTextSize(int s);
int printin(String s);
int printin(int s);
};
#endif