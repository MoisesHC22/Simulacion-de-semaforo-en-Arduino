
// Declaramos pines de salida.

// Pulsador.
int estado_pulsador = 0;

// Leds.
int LedPV = 3;
int LedPR = 4;
int LedCV = 5;
int LedCR = 6;

void setup()
{
  // Configuración del pulsador como de entrada.
    pinMode(2, INPUT);
    pinMode(LedPV, OUTPUT);
    pinMode(LedPR, OUTPUT);
    pinMode(LedCV, OUTPUT);
    pinMode(LedCR, OUTPUT);
  
  /*
    Configuramos la velocidad de transmisión de datos
    del monitor serie.
  */
  
  Serial.begin(9600);
  
}

void loop()
{
  /*
    Esta variable asigna el valor de lectura al estado del pulsador.
  */
  
  estado_pulsador = digitalRead(2);
  
  /*
    Realizamos un a condición con "if" en donde si el estado del
    boton no es presionado o el estado es "0", estará apagado un
    led del peatón rojo y uno del color verde para los carro y 
    estará prendido el led del carro rojo y un led de peatón en 
    verde.
  */
  
  if(estado_pulsador == 0)
  {
    digitalWrite(LedPV,HIGH);
    delay(500);
    
    digitalWrite(LedCR,HIGH);
    delay(500);
    
    digitalWrite(LedCV,LOW);
    delay(500);
    
    digitalWrite(LedPR,LOW);
    delay(500);
    
  }
  else
  {
    
  /*
    Si la condición anterior no se cumple se apagaran los leds que 
    no se prendieron y los que si se apagaran.
  */
    
    digitalWrite(LedPV,LOW);
    delay(500);
    
    digitalWrite(LedCR,LOW);
    delay(500);
    
    digitalWrite(LedCV,HIGH);
    delay(500);
    
    digitalWrite(LedPR,HIGH);
    delay(500);
  }
  
}
