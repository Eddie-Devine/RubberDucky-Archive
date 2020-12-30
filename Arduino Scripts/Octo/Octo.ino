/**
 * AUTHOR: Eddie Devine
 * TARGET: Windows 10
 * DESCRIPTION: Leaves a message on the screen.
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

  // AUTHOR: Eddie Devine
  // TARGET: Windows 10
  // DESCRIPTION: Leaves a message on the screen.
  // DO NOT USE THIS SCRIPT FOR HARMFUL OR ILLEGAL PURPOSES
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("cmd /c start notepad octo.txt"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.print(F("                       ___"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("                    .-'   `'."));

  typeKey(KEY_RETURN);

  Keyboard.print(F("                   /         \\"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("                   |         ;"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("                   |         |"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("       ___.--,"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("          _.._     |0) ~ (0) |    _.---'`__.-( (_."));

  typeKey(KEY_RETURN);

  Keyboard.print(F("   __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `\"\"`"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("  ( ,.--'`   ',__ /./;   ;, '.__.'`    __"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("  _`) )  .---.__.' / |   |\\   \\__..--\"\"  \"\"\"--.,_"));

  typeKey(KEY_RETURN);

  Keyboard.print(F(" `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.'"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("       | |  .' _.-' |  |  \\  \\  '.               `~---`"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("        \\ \\/ .'     \\  \\   '. '-._)"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         \\/ /        \\  \\    `=.__`~-."));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         / /\\         `) )    / / `\"\".`\\"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("   , _.-'.'\\ \\        / /    ( (     / /"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("    `--~`   ) )    .-'.'      '.'.  | ("));

  typeKey(KEY_RETURN);

  Keyboard.print(F("           (/`    ( (`          ) )  '-;"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("            `      '-;         (-'"));

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print(F(" really shouldn't plug random usbs into ur compter :/"));

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.releaseAll();

  delay(100);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(100);
  typeKey(KEY_F11);

  Keyboard.print(F("cls"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("type octo.txt && del octo.txt"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
