//EJERCICIO 2 - LUCES DE POLICÍA
//CURSO DE INICIACIÓN DE ARDUINO - ALBERTO QUESADA PABLOS

//Definición de los pines de los LEDs
const int redLed = 12;
const int blueLed = 13;

// La función setup() se ejecuta 1 vez cuando se presiona el botón de reset o de alimentación de la placa
void setup() 
{
  // Inicializar los pines digitales de los LEDs como salidas (OUTPUT)
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}

// La función loop() se ejecuta una y otra vez infinitamente
void loop() 
{
  digitalWrite(redLed, HIGH);   // Se enciende el LED rojo (HIGH es voltaje alto)
  digitalWrite(blueLed, LOW);   // Se apaga el LED azul (LOW es voltaje bajo)
  delay(120);                   // Espera 120ms
  digitalWrite(redLed, LOW);    // Se apaga el LED rojo (LOW es voltaje bajo)
  digitalWrite(blueLed, HIGH);  // Se enciende el LED azul (HIGH es voltaje alto)
  delay(120);                   // Espera 120ms
}
