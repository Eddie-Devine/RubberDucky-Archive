/**
 * AUTHOR: Eddie Devine
 * TARGET: Windows 10
 * DESCRIPTION: Flashes bright colors onto the screen.
 * DO NOT USE THIS SCRIPT FOR HARMFUL OR ILLEGAL PURPOSES
 
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
  Keyboard.print(F("cmd /c start https://flash.eddie09.repl.co/"));

  typeKey(KEY_RETURN);

  delay(1000);
  typeKey(KEY_F11);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
