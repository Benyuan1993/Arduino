#include "Keyboard.h"

// change this to match your platform:
int platform = WINDOWS;

void setup() {
  // make pin 2 an input and turn on the pull-up resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(2) == HIGH) 
  {
    // do nothing until pin 2 goes low
      delay(500);
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press("l");
      delay(100);
      Keyboard.releaseAll();
  }
  else if (digitalRead(3) == HIGH) 
  {
      // do nothing until pin 3 goes low
      delay(500);
    // Enter:
      Keyboard.press(KEY_RETURN);
      delay(100);
      Keyboard.releaseAll();
  }
  else if (digitalRead(4) == HIGH) 
  {
      // do nothing until pin 2 goes low
      delay(500);
      // DELETE:
      Keyboard.press(KEY_DELETE);
      delay(100);
      Keyboard.releaseAll();
  }
  // do nothing:
  while (true);
}
