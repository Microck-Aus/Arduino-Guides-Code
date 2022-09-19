#include <LiquidCrystal.h>

//Define arduino pins connected to the lcd
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
//Use these pin numbers the initialize the LiquidCrystal library
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello world!");
  lcd.setCursor(0, 1);
  lcd.print("It works :)");
}

void loop() {

}

