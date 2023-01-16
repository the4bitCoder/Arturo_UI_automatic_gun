#include <SPI.h>
#include <LiquidCrystal.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

int buttonPinOne = 6 ;
int buttonPinTwo = 7 ;
int buttonPinThree = 2 ;
int buttonPinFour = 3 ;
int helddown = 4 ;
int on_or_off = 5 ;

int track_array[3];

LiquidCrystal lcd(12, 11, 10, 9, 8, 2);

SFEMP3Shield MP3player ;

void setup()
{
  lcd.begin(16,2);
  MP3player.begin();
  MP3player.SetVolume(0,0);
  pinMode(buttonPinOne,INPUT);
  pinMode(buttonPinTwo,INPUT);
  pinMode(buttonPinThree,INPUT);
  pinMode(buttonPinFour,INPUT);
  pinMode(helddown,INPUT);
  pinMode(on_or_off, INPUT);
}

void loop()
{
  

  track_array[0] = 0;
  track_array[1] = 0;
  track_array[2] = 0;
  track_array[3] = 0;


  if (A0 = HIGH) 
  { 
    track_array[0] = 1;
  }
  else if (A1 = HIGH)
  {
    track_array[1] = 2;
  }
  else if (A2 = HIGH)
  {
    track_array[2] = 3;
  }
  else if (A3 = HIGH)
  {
    track_array[3] = 4;
  }
  else
  {
    lcd("No detecion");
  }
  
  while (helddown = HIGH)
  {
    play(track_array,heldown);
  }
  
}

void play(track_array,helddown)
{
  if (helddown = LOW)
  {
    for (int x = 0;x<4;x++)
    {
      MP3player.playTrack(track_array[x])
    }
  }
  else if (helddown = HIGH)
  {
    for (int x = 0;x<4;x++)
    {
      MP3player.playTrack(track_array[x]+"auto")
    }
  }
}
        
void lcd(char message)
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(message);
}
