void setup() {
  Serial.begin(9600);
  asm("sbi 0x04, 5");
  asm("rjmp START");
}

void loop() {
  static int count=0;
  delay(100);
  asm("rjmp SKIP");
  asm("START:");
  asm("sbi 0x05, 5");
  Serial.println("The LED on pin 13 should be on");
  asm("SKIP:");
  // skip START
  if (count>80) {
    count = 0;
    Serial.println(".");
  }
  Serial.print(".");
  count++;
}
