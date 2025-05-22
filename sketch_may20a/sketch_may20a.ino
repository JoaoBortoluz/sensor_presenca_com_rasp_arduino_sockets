#include <Servo.h>

Servo motord;
int ledVerde = 12;
int ledVermelho = 13;
String comando = "";

void setup() {
  Serial.begin(9600);
  motord.attach(9);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  if (Serial.available()) {

    comando = Serial.readString();
    comando.trim();

    if (comando == "1") {
      // Abre a cancela
      motord.write(180);
      digitalWrite(ledVermelho, LOW);   
      digitalWrite(ledVerde, HIGH);
      
    } else if (comando == "0") {
      // Fecha a cancela
      motord.write(0);
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelho, HIGH);
    }
  }
}
