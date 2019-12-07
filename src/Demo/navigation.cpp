
#include <Zumo32U4.h>

Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;

class navigation
{

  // This function watches for button presses.  If a button is
  // pressed, it beeps a corresponding beep and it returns 'A',
  // 'B', or 'C' depending on what button was pressed.  If no
  // button was pressed, it returns 0.  This function is meant to
  // be called repeatedly in a loop.
  char buttonMonitor()
  {
    if (buttonA.getSingleDebouncedPress())
    {
      // buzzer.playFromProgramSpace(beepButtonA);
      return 'A';
    }

    if (buttonB.getSingleDebouncedPress())
    {
      // buzzer.playFromProgramSpace(beepButtonB);
      return 'B';
    }

    if (buttonC.getSingleDebouncedPress())
    {
      // buzzer.playFromProgramSpace(beepButtonC);
      return 'C';
    }

    return 0;
  }
}