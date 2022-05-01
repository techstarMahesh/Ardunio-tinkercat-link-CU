#include<LiquidCrystal.h>
// use for lcd object
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
 lcd.begin(16, 2); 
}
void loop()
{
  //lcd.autoscroll();
  lcd.setCursor(0,0);          
  lcd.print("Ankur"); 
  lcd.setCursor(0,1);           
  lcd.print("Sir");    
  //delay(1000);
  }
