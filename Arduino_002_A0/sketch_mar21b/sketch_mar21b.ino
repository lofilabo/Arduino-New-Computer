int analogPin0 = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin1 = A1; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin2 = A2; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin3 = A3; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin4 = A11; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin5 = A12; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin6 = A13; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin7 = A14; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin8 = A15; // potentiometer wiper (middle terminal) connected to analog pin 3
//int analogPin9 = A4; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val0 = 0;  // variable to store the value read
int val1 = 0;  // variable to store the value read
int val2 = 0;  // variable to store the value read
int val3 = 0;  // variable to store the value read
int val4 = 0;  // variable to store the value read
int val5 = 0;  // variable to store the value read
int val6 = 0;  // variable to store the value read
int val7 = 0;  // variable to store the value read
int val8 = 0;  // variable to store the value read
int val9 = 0;  // variable to store the value read

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  delay(1000);
  val0 = analogRead(analogPin0);  // read the input pin
  val1 = analogRead(analogPin1);  // read the input pin
  val2 = analogRead(analogPin2);  // read the input pin
  val3 = analogRead(analogPin3);  // read the input pin
  val4 = analogRead(analogPin4);  // read the input pin
  val5 = analogRead(analogPin5);  // read the input pin
  val6 = analogRead(analogPin6);  // read the input pin
  val7 = analogRead(analogPin7);  // read the input pin
  val8 = analogRead(analogPin8);  // read the input pin
  //val9 = analogRead(analogPin9);  // read the input pin

  Serial.print( val0 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val1 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val2 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val3 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val4 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val5 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val6 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val7 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val8 );          // debug value
  Serial.print(" , ");          // debug value

  Serial.print( val9 );          // debug value
  Serial.print(" , ");          // debug value


  Serial.println("");          // debug value


}
