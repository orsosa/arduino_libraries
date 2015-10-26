#include "Arduino.h"
#include "Adafruit_TFTLCD.h"
#include "PAD.h"
int PAD::testprint()
{
tft->print("res: ");
return 0;
}

int PAD::setTextSize(int s)
{
textSize=s;
tft->setTextSize(s);
return 0;
}

int PAD::printin(String s)
{
//if(tft->getCursorX()+s.length()*textSize > sizex)
//  tft->println("");
tft->print(s);
return 0;
}

int PAD::printin(int s)
{
//if(tft->getCursorX()+s.length()*textSize > sizex)
//  tft->println("");
tft->print(s);
return 0;
}