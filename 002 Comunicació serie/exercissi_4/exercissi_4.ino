/*********************************************************************************
**                                                                              **
**                              Hello World                                     **
**                                                                              **
**                                                                              **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************

//********* Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("escull el numero de la operació que voleu realitzar:");
  Serial.println("1. comprovar el num de targeta de credit");
  Serial.println("2. comprovar el num de compte bancari");
  Serial.println("3. buscar un digit perdut de la targeta de credit");  
}

//********* Loop *****************************************************************
void loop()   // run over and over again
{
           // do nothing
}

//********* Funcions *************************************************************
