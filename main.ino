#include <SPI.h>


int buttonPinOne = 0 ;
int buttonPinTwo = 0 ;
int buttonPinThree = 0 ;
int buttonPinFour = 0 ;

char track_array[3][4];

void setup()
{
  boolean begin(void)
  void setVolume(uint8_t left, uint8_t right)
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(5,INPUT);
}

void loop()
  track_array[0] = "no_s";
  track_array[1] = "no_s";
  track_array[2] = "no_s";
  track_array[3] = "no_s";

{
  if (A0 = HIGH) 
  { 
    track_array[0] = "gun1";
  }
  else if (A1 = HIGH)
  {
    track_array[1] = "gun2";
  }
  else if (A2 = HIGH)
  {
    track_array[2] = "gun3";
  }
  else if (A3 = HIGH)
  {
    track_array[3] = "gun4";
  }
  else
  {
    lcd("No detecion");
  }
  
  
}

void play(track_array,helddown)
{
}
        
void lcd(message)
{
}
