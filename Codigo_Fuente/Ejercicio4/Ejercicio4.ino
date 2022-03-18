//EJERCICIO 4 - CONTROLAR FRECUENCIA DE SONIDO BUZZER CON POTENCIÓMETRO
//CURSO DE INICIACIÓN DE ARDUINO - ALBERTO QUESADA PABLOS

const int potAnalogPin = A0;   // Definición del pin analógico donde está conectado el potenciómetro
const int buzzerPin = 5;   //Definición del pin del Buzzer

int valorPot = 0;   // Valor leído directamente desde el potenciómetro
int valorSalida = 0;   // Valor de salida para el PWM (Salida analógica)
int multiplicador = 2; // Valor para ajustar el rango de frecuencia

// La función setup() se ejecuta 1 vez cuando se presiona el botón de reset o de alimentación de la placa
void setup() 
{
  // Inicializar el pin digital del LED como salida (OUTPUT)
  pinMode(buzzerPin, OUTPUT);
}

// La función loop() se ejecuta una y otra vez infinitamente
void loop() 
{
  // Se lee el valor analógico del potenciómetro
  valorPot = analogRead(potAnalogPin);
  
  // Se mapea dicho valor en el rango de salidas analógicas
  valorSalida = map(valorPot, 0, 1024, 0, 255); //REVISAR FUNCION

  // Función para modificar la frecuencia (en Hz) del sonido emitido por el buzzer
  // Se suma 31 puesto que el valor mínimo son 31Hz y se multiplica por 2 para tener un poco más de rango
  // El rango pues sería desde [31 * n -- (255+31) * n] Hz
  // Ej. n = 2 -> [62 -- 572]Hz
  tone(buzzerPin,(valorSalida + 31) * 2);
}
