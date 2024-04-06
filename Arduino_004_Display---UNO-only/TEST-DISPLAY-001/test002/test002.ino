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
  /*
  lcd.setCursor(0,0); 
  lcd.print("0");

  lcd.setCursor(0,1); 
  lcd.print("1"); 

  lcd.setCursor(1,0); 
  lcd.print("2"); 

  lcd.setCursor(1,1); 
  lcd.print("3"); 

  lcd.setCursor(18,3); 
  lcd.print("99"); 
  */
  

  
  byte Heart[] = {
    B00000,
    B01010,
    B11111,
    B11111,
    B01110,
    B00100,
    B00000,
    B00000
  };

  byte customChar1[] = {
  	0b11001,
  	0b11001,
  	0b00001,
  	0b00010,
  	0b11100,
  	0b00000,
  	0b00000,
  	0b00000
  };

  byte customChar2[8] = {
	0b00000,
	0b10001,
	0b10001,
	0b10001,
	0b01110,
	0b00000,
	0b10001,
	0b11011
};
  
  byte customChar3[8] = {
  	0b10011,
  	0b10000,
  	0b10011,
  	0b01000,
  	0b00111,
  	0b00000,
  	0b00000,
  	0b00000
  };

  byte customChar4[8] = {
  	0b11111,
  	0b00001,
  	0b00001,
  	0b00001,
  	0b11111,
  	0b00000,
  	0b00000,
  	0b00000
  };

  byte customChar5[8] = {
  	0b11111,
  	0b10001,
  	0b10001,
  	0b10001,
  	0b11111,
  	0b00000,
  	0b00000,
  	0b00000
  };

  byte customChar6[8] = {
  	0b11111,
  	0b10000,
  	0b10000,
  	0b10000,
  	0b11111,
  	0b00000,
  	0b00000,
  	0b00000
  };

  lcd.clear();
  lcd.createChar(0, Heart);
  lcd.setCursor(0, 1);
  lcd.write(0);


  
  lcd.createChar(1, customChar1);
  lcd.setCursor(7, 0);
  lcd.write(1);

  lcd.createChar(2, customChar2);
  lcd.setCursor(8, 0);
  lcd.write(2);

  lcd.createChar(3, customChar3);
  lcd.setCursor(9, 0);
  lcd.write(3);


  
  lcd.createChar(4, customChar4);
  lcd.setCursor(7, 2);
  lcd.write(4);

  lcd.createChar(5, customChar5);
  lcd.setCursor(8, 2);
  lcd.write(5);

  lcd.createChar(6, customChar6);
  lcd.setCursor(9, 2);
  lcd.write(6);


}

void loop(){
}

