#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4); 

int buttonState = 0; 

void setup() 
{
  lcd.init();   
  lcd.begin(14,4);//Defining 16 columns and 2 rows of lcd display
  lcd.backlight();//To Power ON the back light
  lcd.clear();//Clean the screen

  
  byte Aliem[] = {
    B10001,
    B01010,
    B11111,
    B11111,
    B01110,
    B01010,
    B10001,
    B01010
  };
  
  byte Alien[] = {
    B11011,
    B01010,
    B11111,
    B10101,
    B01110,
    B01010,
    B10001,
    B10001
  };

  lcd.createChar(0, Aliem);
  lcd.setCursor(5,0);
  lcd.write(0);

  lcd.createChar(1, Alien);
  lcd.setCursor(7,0);
  lcd.write(1);

}

void loop(){
  
  delay(1000);  
  lcd.scrollDisplayRight();
  //lcd.scrollDisplayDown();
}

