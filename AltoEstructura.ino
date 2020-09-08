/* Programa AltoEstructuras.ino 
   Realiza el encendido de los diez leds de la rutina Alto,    y en cuyo código se incluye el uso de estructuras    de programación                                         */ 
// Variables 
int bot = 2; 
int led[] = {4,5,6,7,8,9,10,11,12,13}; 
int numLeds = 10; int tiempoRet = 400; int estePin; 
boolean bot_alto = LOW; 
 
// Función setup 
void setup () 
{
  pinMode (bot,INPUT); 
  for (estePin = 0; estePin < numLeds; estePin++) 
  { 
    pinMode (led[estePin],OUTPUT); 
  } 
}
 
// Función loop 
void loop () 
{ 
  bot_alto = digitalRead (bot);   
  if (bot_alto==HIGH) 
  { 
    for (estePin = 0; estePin < numLeds; estePin++) 
    { 
      digitalWrite (led[estePin],HIGH); 
    } 
    delay (tiempoRet); 
    for (estePin = 0; estePin < numLeds; estePin++) 
    { 
      digitalWrite (led[estePin],LOW); 
    } 
    delay (tiempoRet);  
  } 
} 

