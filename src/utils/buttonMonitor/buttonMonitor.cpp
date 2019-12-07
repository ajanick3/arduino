#include <Zumo32U4.h>

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