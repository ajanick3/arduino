void ledDemo() {
  displayBackArrow();

  uint8_t state = 3;
  static uint16_t lastUpdateTime = millis() - 2000;
  while (buttonMonitor() != 'B')
  {
    if ((uint16_t)(millis() - lastUpdateTime) >= 500)
    {
      lastUpdateTime = millis();
      state = state + 1;
      if (state >= 4)
      {
        state = 0;
      }

      switch (state)
      {
      case 0:
        // buzzer.play("c32");
        lcd.gotoXY(0, 0);
        lcd.print(F("Red   "));
        ledRed(1);
        ledGreen(0);
        ledYellow(0);
        break;

      case 1:
        // buzzer.play("e32");
        lcd.gotoXY(0, 0);
        lcd.print(F("Green"));
        ledRed(0);
        ledGreen(1);
        ledYellow(0);
        break;

      case 2:
        // buzzer.play("g32");
        lcd.gotoXY(0, 0);
        lcd.print(F("Yellow"));
        ledRed(0);
        ledGreen(0);
        ledYellow(1);
        break;
      }
    }
  }

  ledRed(0);
  ledYellow(0);
  ledGreen(0);
}
