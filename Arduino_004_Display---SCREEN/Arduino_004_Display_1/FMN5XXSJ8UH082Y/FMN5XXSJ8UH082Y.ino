/* www.learningbuz.com */
/*Impport following Libraries*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//I2C pins declaration
//LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 
LiquidCrystal_I2C lcd(0x27,20,4); 

void setup() 
{

lcd.begin(14,4);//Defining 16 columns and 2 rows of lcd display
lcd.backlight();//To Power ON the back light
//lcd.backlight();// To Power OFF the back light
lcd.clear();//Clean the screen
lcd.setCursor(0,0); 
lcd.print(" SUBSCRIBE ");
}

void loop() 
{
//Write your code
/*
lcd.setCursor(0,0); //Defining positon to write from first row,first column .
lcd.print(" Tech Maker "); //You can write 16 Characters per line .

delay(1000);//Delay used to give a dynamic effect
lcd.setCursor(0,1);  //Defining positon to write from second row,first column .
lcd.print("Like | Share");
delay(2000); 

lcd.clear();//Clean the screen
lcd.setCursor(0,0); 
lcd.print(" SUBSCRIBE ");
lcd.setCursor(0,1);
lcd.print(" TECH MAKER ");
delay(2000); 

lcd.clear();//Clean the screen
lcd.setCursor(0,0); 
lcd.print("Line 1 ");
lcd.setCursor(2,1);
lcd.print("Line 2");
lcd.setCursor(4,2);
lcd.print("Line 3");
lcd.setCursor(6,3);
lcd.print("Line 4");
delay(3000); 
*/
}

