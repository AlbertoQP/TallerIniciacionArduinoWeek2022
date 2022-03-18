//EJERCICIO 5 - LEER DATOS DEL SENSOR DE LUZ DESDE EL MONITOR SERIE Y ENCENDER LED
//CURSO DE INICIACIÓN DE ARDUINO - ALBERTO QUESADA PABLOS

const int sensorLuzPin = A1;   // Definición del pin analógico donde está conectado el sensor lumínico
const int redLed = 12;   //Definición del pin del LED

int valorSensorLuz = 0;   // Valor leído directamente desde el sensor lumínico
int valorMargen = 50;   //Valor limite en el cual se activará el led

// La función setup() se ejecuta 1 vez cuando se presiona el botón de reset o de alimentación de la placa
void setup() 
{
  Serial.begin(9600); // Iniciamos el puerto serie
  
  pinMode(redLed, OUTPUT); // Inicializar el pin digital del LED como salida (OUTPUT)
}

// La función loop() se ejecuta una y otra vez infinitamente
void loop() 
{
  valorSensorLuz = analogRead(sensorLuzPin); // Lee valores entre 0 - 255
  
  Serial.println(valorSensorLuz); // Se muestra en el monitor serie el valor leído
  
  // Se compara el valor leído del sensor con el valor margen
  if (valorSensorLuz < valorMargen)
  {
     digitalWrite(redLed, HIGH); // Se enciende el LED si es menor
  }
  else
  {
    digitalWrite(redLed, LOW); // Se apaga el LED en caso contrario
  }
 
} 
