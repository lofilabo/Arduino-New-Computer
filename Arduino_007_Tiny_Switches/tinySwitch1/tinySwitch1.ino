// constants won't change. They're used here to set pin numbers:
const int BUTTON_PIN_1 = 37; // the number of the pushbutton pin
const int BUTTON_PIN_2 = 39; // the number of the pushbutton pin

// Variables will change:
int lastState1 = HIGH; // the previous state from the input pin
int currentState1;    // the current reading from the input pin

int lastState2 = HIGH; // the previous state from the input pin
int currentState2;    // the current reading from the input pin

int onoff_1 = 0;
int onoff_2 = 0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the pushbutton pin as an pull-up input
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
  pinMode(BUTTON_PIN_1, INPUT_PULLUP);
  pinMode(BUTTON_PIN_2, INPUT_PULLUP);
}

void loop() {
  // read the state of the switch/button:
  //currentState1 = digitalRead(BUTTON_PIN_1);
  //currentState2 = digitalRead(BUTTON_PIN_2);
  
  if(digitalRead(BUTTON_PIN_1)==0){
    onoff_1 = 1;
  }else{
    onoff_1 = 0;
  }
  
  if(digitalRead(BUTTON_PIN_2)==0){
    onoff_2 = 1;
  }else{
    onoff_2 = 0;
  }
  
  
  Serial.print( onoff_1 );
  Serial.print(" -- ");
  Serial.print( onoff_2 );

  Serial.println("");

  delay(200);
}

