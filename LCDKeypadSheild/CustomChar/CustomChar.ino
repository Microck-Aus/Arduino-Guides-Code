#include <LiquidCrystal.h>

//Define arduino pins connected to the lcd
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
//Use these pin numbers the initialize the LiquidCrystal library
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//8 byte array used to store the heart character
byte heart[8] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B10001,
  B01010,
  B00100,
  B00000
};

//8 byte array used to store the smile character
byte smile[8] = {
  B00000,
  B01010,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};

void setup() {
  //Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  //Create characters from the byte arrays
  lcd.createChar(0, heart);
  lcd.createChar(1, smile);

  lcd.home();
  lcd.print("Custom");
  lcd.setCursor(0, 1);
  lcd.print("Characters:");

  //Move the cursor to where we want the first custom char to be
  lcd.setCursor(12, 1);

  //Write the char to the display
  lcd.write(byte(0));  //Char 0 if not in a varable will need to be cast as a byte

  //Move the cursor to where we want the second custom char to be
  lcd.setCursor(14, 1);

  //Write the char to the display
  lcd.write(1);
}

void loop() {
}