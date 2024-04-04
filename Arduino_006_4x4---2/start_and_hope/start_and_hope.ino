#include <Wire.h>

#include <LiquidCrystal.h>

#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'0', '1', '2', '3'},
  {'4', '5', '6', '7'},
  {'8', '9', 'a', 'b'},
  {'c', 'd', 'e', 'f'}
};

byte rowPins[ROWS] = {34, 36, 38, 40}; 
byte colPins[COLS] = {42, 44, 46, 48}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.print(customKey);
  }
}
