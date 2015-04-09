/* Ejemplo 2 FLISOL 2015*/
/* COMUNICACION */
/* Amid Ale */
/* Cooperativa Axón */

#define MIN 0
#define MAX 100

byte num = 0;                    //variable num que almacena el valor aleatorio
byte estado = 0;                 //variable que almacena el estado actual del pulsador
byte band = 0;

void setup()
{
  //Configuraciones
  pinMode(PUSH2, INPUT_PULLUP);  //Configuramos la entrada del pulsador como entrada
  Serial.begin(9600);            //Configuramos el puerto serie a una velocidad de 9600 baudios    
}

void loop()
{
  // programa:
  estado = digitalRead(PUSH2);   //asignamos a estado el valor leido del pulsador
  num = random(MIN,MAX);
  
  if(estado == 0 && band == 0) {
    Serial.println("*****************************************");
    Serial.println("*********EL NUMERO FAVORECIDO ES*********"); 
    Serial.print("**                  ");
    Serial.print(num);
    Serial.println("                 **");
    Serial.println("*****************************************");
    band = 1;
    
  }  else { 
            Serial.println("Presione el pulsador...");            
          }
  
  delay(1000);
  
  
}
