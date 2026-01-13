#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  
  delay(100); 

  pinMode(2, OUTPUT);
  
  Serial.println("PISCANDO");
}

void loop() {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}