//EJERCICIO 3 - CONTROLAR FRECUENCIA DE PARPADEO LED CON POTENCIÓMETRO
//CURSO DE INICIACIÓN DE ARDUINO - ALBERTO QUESADA PABLOS

const int potAnalogPin = A0;   // Definición del pin analógico donde está conectado el potenciómetro
const int ledPin = 12;   //Definición del pin del LED

int valorSensor = 0;   // Valor leído directamente desde el potenciómetro
int valorSalida = 0;   // Valor de salida para el PWM (Salida analógica)

// La función setup() se ejecuta 1 vez cuando se presiona el botón de reset o de alimentación de la placa
void setup() 
{
  // Inicializar el pin digital del LED como salida (OUTPUT)
  pinMode(ledPin, OUTPUT);
}

// La función loop() se ejecuta una y otra vez infinitamente
void loop() 
{
  // Se lee el valor analógico del potenciómetro
  valorSensor = analogRead(potAnalogPin);
  
  // Se mapea el rango de dicho valor en el rango de salidas analógicas
  valorSalida = map(valorSensor, 0, 1024, 0, 255); 

  digitalWrite(ledPin, HIGH);   // Se enciende el LED (HIGH es voltaje alto)
  delay(255 - valorSalida);     // Se espera el valor máximo del potenciómetro - el valor leído
  digitalWrite(ledPin, LOW);    // Se apaga el LED (LOW es voltaje bajo)
  delay(255 - valorSalida);     // Se espera el valor máximo del potenciómetro - el valor leído
}
