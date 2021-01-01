/**
 * AUTHOR: Eddie Devine
 * TARGET: Windows 10
 * DESCRIPTION: Opens a full screen Windows update window and turns off other monitors.
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
  Keyboard.press('p');
  Keyboard.releaseAll();

  delay(200);
  typeKey(KEY_UP_ARROW);

  typeKey(KEY_UP_ARROW);

  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("cmd /c start https://updatefaker.com/windows10/index.html"));

  typeKey(KEY_RETURN);

  delay(1000);
  typeKey(KEY_F11);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
