#include <Zumo32U4.h>

Zumo32U4LCD lcd;

class Menu
{
public:
  struct Item
  {
    const char *name;
    void (*action)();
  };

  Menu(Item *items) // uint8_t itemCount
  {
    this->items = items;
    this->itemCount = strlen(items); // itemCount;
    lcdItemIndex = 0;
  }

  void lcdUpdate(uint8_t index)
  {
    lcd.clear();
    lcd.print(items[index].name);
    lcd.gotoXY(0, 1);
    lcd.print(F("\x7f"
                "A \xa5"
                "B C\x7e"));
  }

  void action(uint8_t index)
  {
    items[index].action();
  }

  // Prompts the user to choose one of the menu items,
  // then runs it, then returns.
  void select()
  {
    lcdUpdate(lcdItemIndex);

    while (1)
    {
      switch (buttonMonitor())
      {
      case 'A':
        // The A button was pressed so decrement the index.
        if (lcdItemIndex == 0)
        {
          lcdItemIndex = itemCount - 1;
        }
        else
        {
          lcdItemIndex--;
        }
        lcdUpdate(lcdItemIndex);
        break;

      case 'C':
        // The C button was pressed so increase the index.
        if (lcdItemIndex >= itemCount - 1)
        {
          lcdItemIndex = 0;
        }
        else
        {
          lcdItemIndex++;
        }
        lcdUpdate(lcdItemIndex);
        break;

      case 'B':
        // The B button was pressed so run the item and return.
        action(lcdItemIndex);
        return;
      }
    }
  }

private:
  Item *items;
  uint8_t itemCount;
  uint8_t lcdItemIndex;
};