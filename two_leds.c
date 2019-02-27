#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
 }

// the loop function runs over and over again forever
void loop() {
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW); 
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH); 
  delay(1000);
 }
