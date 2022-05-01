#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
void setup()
{
    lcd.begin(16, 2);
}
void loop()
{
    for (int i = 0; i < 15; i++)
    {
        lcd.noBlink();
        lcd.setCursor(i, 0);
        // delay(500);
        lcd.print("Mahesh Sharam");

        lcd.setCursor(i, 1);
        lcd.print("21MCI1127");
        delay(200);
        lcd.clear();
    }
}
