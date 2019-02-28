#include "Keyboard.h"

// change this to match your platform:

void setup() 
{
  // make pin 2 an input and turn on the pull-up resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() 
{
  while (digitalRead(2) == LOW) 
  {
  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.write('l');
  delay(100);
  Keyboard.releaseAll();
  delay(200);
  break;
  }
    while (digitalRead(3) == LOW) 
  {
  delay(200);
  Keyboard.press(KEY_UP_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(200);
  break;
  }
    while (digitalRead(4) == LOW) 
  {
  delay(200);
  Keyboard.press(KEY_DOWN_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(200);
  break;
  }
}
