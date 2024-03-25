/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */
int random_variable;
//int static_variable2;
int static_variable = 0;
//int static_variable2 = 500;

int myyyna = 1;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  // Serial.println("Bluuuurgh");
  // Serial.println(sensorValue);
  delay(1000);        // delay in between reads for stability


  random_variable = random(0, 1000);
  myyyna = random( 0 - random_variable );

  Serial.print("Variable_1:");
  Serial.print(random_variable);
  //Serial.print( 800 );
  Serial.print(",");
  
  Serial.print("Variable_2:");
  Serial.print(myyyna );
  Serial.print(",");
  
  //Serial.print("Variable_3:");
  //Serial.print( 600 );
  //Serial.print(",");
  
  //Serial.print("Variable_4:");
  //Serial.print( 200 );
  Serial.println( );




}
