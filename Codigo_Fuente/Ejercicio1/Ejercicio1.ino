//EJERCICIO 1 - ENCENDER Y APAGAR UN LED
//CURSO DE INICIACIÓN DE ARDUINO - ALBERTO QUESADA PABLOS

//Definición del pin del LED
const int blueLed = 13;

// La función setup() se ejecuta 1 vez cuando se presiona el botón de reset o de alimentación de la placa
void setup() 
{
  // Inicializar el pin digital del LED como salida (OUTPUT)
  pinMode(blueLed, OUTPUT);
}

// La función loop() se ejecuta una y otra vez infinitamente
void loop() 
{
  digitalWrite(blueLed, HIGH);   // Se enciende el LED azul (HIGH es voltaje alto)
  delay(1000);                   // Espera 1000ms (1 segundo)
  digitalWrite(blueLed, LOW);    // Se apaga el LED azul (LOW es voltaje bajo)
  delay(1000);                   // Espera 1000ms (1 segundo)
}
