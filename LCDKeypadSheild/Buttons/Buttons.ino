#include <LiquidCrystal.h>

//Define arduino pins connected to the lcd
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
//Use these pin numbers the initialize the LiquidCrystal library
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0, 0);
  lcd.print("Button Example");
  lcd.setCursor(0, 1);
  lcd.print("Press Key:");
}

void loop() {
  int x;
  //Read the Analog Value on A0 which is the pin the buttons are connected to
  x = analogRead(0);
  lcd.setCursor(10, 1);

  //Using the expected resistance values of each button find which button is being pressed
  if (x < 60) {
    lcd.print("Right ");
  } else if (x < 200) {
    lcd.print("Up    ");
  } else if (x < 400) {
    lcd.print("Down  ");
  } else if (x < 600) {
    lcd.print("Left  ");
  } else if (x < 800) {
    lcd.print("Select");
  }
}