/* Ejemplo 1 FLISOL 2015*/
/* LEDS Y PULSADORES*/
/* Amid Ale */

int estado = 0;                    //variable estado que almacena el valor actual del pulsador

void setup()
{
  //Configuraciones
  pinMode(PUSH2, INPUT_PULLUP);  //Configuramos la entrada del pulsador como entrada
  pinMode(RED_LED, OUTPUT);      //Configuramos la salida conectada al led Rojo como salida
  pinMode(GREEN_LED, OUTPUT);    //Configuramos la salida conectada al led verde como salida  
    
}

void loop()
{
  // programa:
  estado = digitalRead(PUSH2);   //asignamos a estado el valor leido del pulsador
  
  if(estado == 1) {
    digitalWrite(GREEN_LED,HIGH);  //Prendemos el led verde
    digitalWrite(RED_LED,LOW);     //Apagamos el led rojo 
  }  else {
            digitalWrite(GREEN_LED,LOW);    //Apagamos el led verde
            digitalWrite(RED_LED,HIGH);     //Prendemos el led rojo 
          }
  
  
  
}
