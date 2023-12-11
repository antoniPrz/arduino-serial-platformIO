#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hola, este es un mensaje de prueba.");
  Serial.print("El valor de la variable x es: ");


  int x = 4355;
  Serial.println(x);
  // Esperar un breve momento antes de enviar el siguiente mensaje
  delay(1000);
}

// put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
 

// }
