void setup() {
  Serial.begin(9600);
  asm("sbi 0x04, 5"); // seting PIN for output
  asm("rjmp START");
}

void loop() {
  static int count=0;
  asm("sbi 0x05, 5");  // set bit immediately
  delay(100);
  asm("cbi 0x05, 5");  // clear bit immediatedly
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
