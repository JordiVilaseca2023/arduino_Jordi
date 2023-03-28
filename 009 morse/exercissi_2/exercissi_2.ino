
/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //A
  punt();
  ratlla();
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  espaiL;
  //D
  ratlla();
  punt();
  punt();
  espaiL();
  //U
  punt();
  punt();
  ratlla();
  espaiL();
  //I
  punt();
  punt();
  espaiL();
  //N
  ratlla();
  punt();
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  espaiP();
  //S
  punt();
  punt();
  punt();
  espaiL();
  //P
  punt();
  ratlla();
  ratlla();
  punt();
  espaiL();
  //E
  punt();
  espaiL();
  //A
  punt();
  ratlla();
  espaiL();
  //K
  ratlla();
  punt();
  ratlla();
  espaiL();
  //S
  punt();
  punt();
  punt();
  espaiP();
  //M
  ratlla();
  ratlla();
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  espaiL();
  //S
  punt();
  punt();
  punt();
  espaiL();
  //E
   punt();
  espaiP();
  
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
