#include <Zumo32U4.h>

// Clears the LCD and puts [back_arrow]B on the second line
// to indicate to the user that the B button goes back.
void displayBackArrow()
{
  lcd.clear();
  lcd.gotoXY(0, 1);
  lcd.print(F("\7B"));
  lcd.gotoXY(0, 0);
}