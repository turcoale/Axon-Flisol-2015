/* Ejemplo 1 FLISOL 2015*/
/* Led y Pulsador */
/* Amid Ale */

int estado = 0;

void setup()
{
  //Configuraciones
  pinMode(PUSH2, INPUT_PULLUP);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
    
}

void loop()
{
  // programa:
  estado = digitalRead(PUSH2);
  
  if(estado == 1) {
    digitalWrite(GREEN_LED,HIGH);
    digitalWrite(RED_LED,LOW);
  }  else {
            digitalWrite(GREEN_LED,LOW);
            digitalWrite(RED_LED,HIGH);
          }
  
  
  
}
