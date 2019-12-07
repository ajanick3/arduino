#include <Zumo32U4.h>

// -------------------------------------------------------
// -------------------------------------------------------
void detectProximity(Zumo32U4ProximitySensors proxSensors)
{
  bool proxLeftActive = proxSensors.readBasicLeft();
  bool proxFrontActive = proxSensors.readBasicFront();
  bool proxRightActive = proxSensors.readBasicRight();
  proxSensors.read();
  return proxLeftActive || proxFrontActive || proxRightActive;
}

// -------------------------------------------------------
// -------------------------------------------------------
void nickDemo(Zumo32U4ProximitySensors proxSensors)
{
  while (buttonMonitor() != 'B')
  {
    detectProximity(proxSensors)
  }
  // loadCustomCharactersMotorDirs();
  // lcd.clear();
  // lcd.gotoXY(1, 1);
  // lcd.print(F("A \7B C"));

  // int16_t leftSpeed = 0, rightSpeed = 0;
  // int8_t leftDir = 1, rightDir = 1;
  // uint16_t lastUpdateTime = millis() - 100;
  // uint8_t btnCountA = 0, btnCountC = 0, instructCount = 0;

  // int16_t encCountsLeft = 0, encCountsRight = 0;
  // char buf[4];

  // while (buttonMonitor() != 'B')
  // {
  //   encCountsLeft += encoders.getCountsAndResetLeft();
  //   if (encCountsLeft < 0) { encCountsLeft += 1000; }
  //   if (encCountsLeft > 999) { encCountsLeft -= 1000; }

  //   encCountsRight += encoders.getCountsAndResetRight();
  //   if (encCountsRight < 0) { encCountsRight += 1000; }
  //   if (encCountsRight > 999) { encCountsRight -= 1000; }

  //   // Update the LCD and motors every 50 ms.
  //   if ((uint16_t)(millis() - lastUpdateTime) > 50)
  //   {
  //     lastUpdateTime = millis();

  //     lcd.gotoXY(0, 0);
  //     if (showEncoders)
  //     {
  //       sprintf(buf, "%03d", encCountsLeft);
  //       lcd.print(buf);
  //       lcd.gotoXY(5, 0);
  //       sprintf(buf, "%03d", encCountsRight);
  //       lcd.print(buf);
  //     }
  //     else
  //     {
  //       // Cycle the instructions every 2 seconds.
  //       if (instructCount == 0)
  //       {
  //         lcd.print("Hold=run");
  //       }
  //       else if (instructCount == 40)
  //       {
  //         lcd.print("Tap=flip");
  //       }
  //       if (++instructCount == 80) { instructCount = 0; }
  //     }

  //     if (buttonA.isPressed())
  //     {
  //       if (btnCountA < 4)
  //       {
  //         btnCountA++;
  //       }
  //       else
  //       {
  //         // Button has been held for more than 200 ms, so
  //         // start running the motor.
  //         leftSpeed += 15;
  //       }
  //     }
  //     else
  //     {
  //       if (leftSpeed == 0 && btnCountA > 0 && btnCountA < 4)
  //       {
  //         // Motor isn't running and button was pressed for
  //         // 200 ms or less, so flip the motor direction.
  //         leftDir = -leftDir;
  //       }
  //       btnCountA = 0;
  //       leftSpeed -= 30;
  //     }

  //     if (buttonC.isPressed())
  //     {
  //       if (btnCountC < 4)
  //       {
  //         btnCountC++;
  //       }
  //       else
  //       {
  //         // Button has been held for more than 200 ms, so
  //         // start running the motor.
  //         rightSpeed += 15;
  //       }
  //     }
  //     else
  //     {
  //       if (rightSpeed == 0 && btnCountC > 0 && btnCountC < 4)
  //       {
  //         // Motor isn't running and button was pressed for
  //         // 200 ms or less, so flip the motor direction.
  //         rightDir = -rightDir;
  //       }
  //       btnCountC = 0;
  //       rightSpeed -= 30;
  //     }

  //     leftSpeed = constrain(leftSpeed, 0, 400);
  //     rightSpeed = constrain(rightSpeed, 0, 400);

  //     motors.setSpeeds(leftSpeed * leftDir, rightSpeed * rightDir);

  //     // Display arrows pointing the appropriate direction
  //     // (solid if the motor is running, chevrons if not).
  //     lcd.gotoXY(0, 1);
  //     if (leftSpeed == 0)
  //     {
  //       lcd.print((leftDir > 0) ? '\0' : '\1');
  //     }
  //     else
  //     {
  //       lcd.print((leftDir > 0) ? '\2' : '\3');
  //     }
  //     lcd.gotoXY(7, 1);
  //     if (rightSpeed == 0)
  //     {
  //       lcd.print((rightDir > 0) ? '\0' : '\1');
  //     }
  //     else
  //     {
  //       lcd.print((rightDir > 0) ? '\2' : '\3');
  //     }
  //   }
  // }
  // motors.setSpeeds(0, 0);
  void drive(char wheel, char direction)
  {
    return;
  }
  // -------------------------------------------------------
}
