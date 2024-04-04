const int DIN_PIN1 = 23;
const int DIN_PIN2 = 25;
const int DIN_PIN3 = 27;
const int DIN_PIN4 = 29;
const int DIN_PIN5 = 31;
const int DIN_PIN6 = 33;

void setup(){
    pinMode( DIN_PIN1, INPUT );
    pinMode( DIN_PIN2, INPUT );
    pinMode( DIN_PIN3, INPUT );
    pinMode( DIN_PIN4, INPUT );
    pinMode( DIN_PIN5, INPUT );
    pinMode( DIN_PIN6, INPUT );
    Serial.begin( 9600 );
}

void loop(){
    
    Serial.print( digitalRead( DIN_PIN5 ) );
    Serial.print( " " );
    Serial.print( digitalRead( DIN_PIN2 ) );
    Serial.print( " ~ " );
    Serial.print( digitalRead( DIN_PIN6 ) );
    Serial.print( " " );
    Serial.print( digitalRead( DIN_PIN3 ) );
    Serial.print( " ~ " );
    Serial.print( digitalRead( DIN_PIN4 ) );
    Serial.print( " " );
    Serial.print( digitalRead( DIN_PIN1 ) );
    Serial.print( "" );

    Serial.println( "" );
    //Serial.println( analogRead( DIN_PIN ));

    delay( 2000 );
}

