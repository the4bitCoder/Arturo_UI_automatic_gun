#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

int buttonPinOne = 0 ;
int buttonPinTwo = 0 ;
int buttonPinThree = 0 ;
int buttonPinFour = 0 ;
int helddown = 0 ;

SFEMP3Shield MP3player ;

void setup()
{
  MP3player.begin();
  MP3player.SetVolume(0,0);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
}

void loop()
{
  
}
