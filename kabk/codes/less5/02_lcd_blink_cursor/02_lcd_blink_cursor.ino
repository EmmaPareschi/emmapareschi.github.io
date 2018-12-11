/*
 * Emma Pareschi, Nov 2018
 * 
 * sketch to demostrate the function Blink/noBlink for LCD
 */


// include the library code:
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("example of");
  lcd.setCursor(0,1);
  lcd.print("blink cursor");  
}

void loop() {
  // Turn off the blinking cursor:
  lcd.noBlink();
  delay(3000);
  // Turn on the blinking cursor:
  lcd.blink();
  delay(3000);
}


