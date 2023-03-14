/**********************************************************************************
**                                                                               **
**                             Display de 7 segments                             **
**                                                                               **
**                        Programa1 - Display Càtode Comú                        **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          // donar nom al pin 6 de l’Arduino
const byte segC = 7;          // donar nom al pin 7 de l’Arduino
const byte segD = 8;          // donar nom al pin 8 de l’Arduino
const byte segE = 9;          // donar nom al pin 9 de l’Arduino
const byte segF = 10;         // donar nom al pin 10 de l’Arduino
const byte segG = 11;         // donar nom al pin 11 de l’Arduino
const int pausa = 1000;             // definir variable de temps en ms


//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
  
  digitalWrite(segA, LOW);  
  digitalWrite(segB, LOW);     
  digitalWrite(segC, LOW);     
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW); 
}

//********** Loop *****************************************************************
void loop()
  { 
  digitalWrite(segA, LOW);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW);  

  delay(pausa);               // es queda en aquest estat pausa ms  
  
  digitalWrite(segA, HIGH);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, LOW);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, LOW);    
  digitalWrite(segG, HIGH);
  
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW);    
  digitalWrite(segG, HIGH);
    
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);
  
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);  
  digitalWrite(segB, LOW);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);
      
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);  
  digitalWrite(segB, LOW);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);
      
  delay(pausa);               // es queda en aquest estat pausa ms

  digitalWrite(segA, HIGH);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW);
      
  delay(pausa);               // es queda en aquest estat pausa ms

  digitalWrite(segA, HIGH);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);
      
  delay(pausa);               // es queda en aquest estat pausa ms

  digitalWrite(segA, HIGH);  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW); 
  digitalWrite(segF, LOW);    
  digitalWrite(segG, HIGH);
      
  delay(pausa);               // es queda en aquest estat pausa ms
  }

//********** Funcions *************************************************************
