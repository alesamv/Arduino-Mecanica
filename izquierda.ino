int bot = 2;
int led[] = {4,5,6,7,8,9,10,11,12,13};
int numLeds = 10;
int tiempoRet = 1000;
int estePin;
int cuenta_izq = 0;
boolean bot_izq = LOW;

// Función setup
void setup () {
  pinMode (bot,INPUT);
  for (estePin = 0; estePin < numLeds; estePin++){
    pinMode (led[estePin],OUTPUT);
  }
}

// Función loop
void loop () {
  bot_izq = digitalRead (bot);
  if (bot_izq==HIGH) {
    switch (cuenta_izq) {
      case 0:
      digitalWrite (led[9],HIGH);
      break;
      case 1:
      digitalWrite (led[8],HIGH);
      digitalWrite (led[7],HIGH);
      digitalWrite (led[6],HIGH);
      break;
      case 2:
      digitalWrite (led[5],HIGH);
      digitalWrite (led[4],HIGH);
      digitalWrite (led[3],HIGH);
      break;
      case 3:
      digitalWrite (led[2],HIGH);
      digitalWrite (led[1],HIGH);
      digitalWrite (led[0],HIGH);
      break;
      default:
      ;
    }
    delay (tiempoRet);
    cuenta_izq++;
    if (cuenta_izq > 3) {
      cuenta_izq = 0;
    }
  }
  for (estePin = 0; estePin < numLeds; estePin++) {
    digitalWrite (led[estePin],LOW);
  }
}
