// Se incluye la ibreria para el uso de LCD
#include <LiquidCrystal.h>

// Declarar los pines que se conectan al LCD
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
float voltaje;//De tipo float para incluir los decimales

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperatura");
  Serial.begin(9600);//Iniciamos la comunicación con el puerto serial
}

void loop() {
   float grados; //Variable para la conversion a grados
   voltaje = analogRead(0) * 0.004882814;
                               
   grados = (voltaje - 0.5) * 100.0;
                               
 
  // Colocarse en la segunda fila
  lcd.setCursor(0, 1);
 
  //lcd.print(millis()/1000);
  lcd.print(grados);
}
