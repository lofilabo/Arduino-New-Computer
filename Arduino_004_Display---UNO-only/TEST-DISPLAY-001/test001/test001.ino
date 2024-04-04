/* www.learningbuz.com */
/*Impport following Libraries*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//I2C pins declaration
//LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 
LiquidCrystal_I2C lcd(0x27,20,4); 

void setup() 
{
  lcd.init();   
  lcd.begin(14,4);//Defining 16 columns and 2 rows of lcd display
  lcd.backlight();//To Power ON the back light
  //lcd.backlight();// To Power OFF the back light
  lcd.clear();//Clean the screen

  //lcd.setCursor(Column, Row);//---> max: 19,3

  lcd.setCursor(0,0); 
  lcd.print("0");

  lcd.setCursor(0,1); 
  lcd.print("1"); 

  lcd.setCursor(1,0); 
  lcd.print("2"); 

  lcd.setCursor(1,1); 
  lcd.print("3"); 

  lcd.setCursor(19,3); 
  lcd.print("H"); 

}

void loop(){
}

