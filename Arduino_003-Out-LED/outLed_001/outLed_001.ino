int oneLight = HIGH;
int twoLight = LOW;

int stat1 = HIGH;
int stat2 = LOW;
int stat3 = LOW;
int stat4 = LOW;
int stat5 = LOW;


void setup() {
  pinMode(22, OUTPUT);
  pinMode(24, OUTPUT);
}
void loop() {
  //changeOneLight();
  changeAllLight();
  //allOn();
  
  delay(1000);             
}

void allOn(){

  //digitalWrite(22, HIGH);
  digitalWrite(22, LOW);
  
  //digitalWrite(24, HIGH);
  digitalWrite(24, LOW);

  //digitalWrite(26, HIGH);
  digitalWrite(26, LOW);

  //digitalWrite(28, HIGH);
  digitalWrite(28, LOW);

  digitalWrite(30, HIGH);
  //digitalWrite(30, LOW);
  
  
}

void changeAllLight(){

  if( stat1 == HIGH ){
    stat1 = LOW ;
    stat2 = HIGH ;
    stat3 = LOW ;
    stat4 = LOW ;
    stat5 = LOW ;
  }else if( stat2 == HIGH ){
    stat1 = LOW ;
    stat2 = LOW ;
    stat3 = HIGH ;
    stat4 = LOW ;
    stat5 = LOW ;
  }else if( stat3 == HIGH ){
    stat1 = LOW ;
    stat2 = LOW ;
    stat3 = LOW ;
    stat4 = HIGH ;
    stat5 = LOW ;
  }else if( stat4 == HIGH ){
    stat1 = LOW ;
    stat2 = LOW ;
    stat3 = LOW ;
    stat4 = LOW ;
    stat5 = HIGH ;
  }else if( stat5 == HIGH ){
    stat1 = HIGH ;
    stat2 = LOW ;
    stat3 = LOW ;
    stat4 = LOW ;
    stat5 = LOW ;
  }  
  digitalWrite(22, stat1);
  digitalWrite(24, stat2);
  digitalWrite(26, stat3);
  digitalWrite(28, stat4);
  digitalWrite(30, stat5);
  
}  

void changeOneLight(){

  if(oneLight == HIGH){
    oneLight = LOW ;
  }else{
    oneLight = HIGH ;
  }
  digitalWrite(22, oneLight);
  

  if(twoLight == HIGH){
    twoLight = LOW ;
  }else{
    twoLight = HIGH ;
  }
  digitalWrite(24, twoLight);
  
}
