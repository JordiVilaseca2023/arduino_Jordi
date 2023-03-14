/****************************************************************
**                                                             **
**                        Fade LEDs                            **
**                                                             **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte led0 = 3;
const byte led1 = 5;
const byte led2 = 6;
const byte led3 = 9;
const byte led4 = 10;
const byte led5 = 11;
unsigned long temps = 50;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 pinMode(led0, OUTPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
}
//************************* LOOP ********************************
void loop() {
  analogWrite(led0, 255); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 155); 
  analogWrite(led1, 255);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 55); 
  analogWrite(led1, 155);
  analogWrite(led2, 255);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 55);
  analogWrite(led2, 155);
  analogWrite(led3, 255);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 55);
  analogWrite(led3, 155);
  analogWrite(led4, 255);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 55);
  analogWrite(led4, 155);
  analogWrite(led5, 255);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 55);
  analogWrite(led5, 155);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 55);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(100);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 255);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 255);
  analogWrite(led5, 155);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 255);
  analogWrite(led4, 155);
  analogWrite(led5, 55);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 255);
  analogWrite(led3, 155);
  analogWrite(led4, 55);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 255);
  analogWrite(led2, 155);
  analogWrite(led3, 55);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 255);
  analogWrite(led1, 155);
  analogWrite(led2, 55);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 155); 
  analogWrite(led1, 55);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 55); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(temps);

  analogWrite(led0, 0); 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(100);
}
//************************** FUNCIONS **************************
