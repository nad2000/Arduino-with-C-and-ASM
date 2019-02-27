#define BUZZER 7

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(BUZZER, OUTPUT);
 }

void sound() {
  unsigned char i;
  for(i=0;i<80;i++)// Output a frequency of sound
  {
    digitalWrite(BUZZER,HIGH);//sound
    delay(1);//delay 1ms
    digitalWrite(BUZZER,LOW);//mute
    delay(1);//delay 1ms
  }
  for(i=0; i<100; i++) // Output the other frequency of sound
  {
    digitalWrite(BUZZER,HIGH);//sound
    delay(2);//delay 2ms
    digitalWrite(BUZZER,LOW);//mute
    delay(2);//delay 2ms
  }
}

void loop() {
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW); 
  delay(500); // delay(1000);
  sound();
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH); 
  delay(500); // delay(1000);
   sound();
}
