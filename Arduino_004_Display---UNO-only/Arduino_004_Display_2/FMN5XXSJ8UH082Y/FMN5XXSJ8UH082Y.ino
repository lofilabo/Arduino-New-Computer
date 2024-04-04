/* www.learningbuz.com */
/*Impport following Libraries*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//I2C pins declaration

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 
//LiquidCrystal_I2C lcd(0x27, 16, 2);

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {
  lcd.createChar(0, smiley);
  lcd.begin(16, 2);  
  lcd.write(byte(0));
}

void loop() {}
