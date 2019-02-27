void setup() {
  Serial.begin(9600);
  asm("rjmp START");
}

void loop() {
  static int count=0;
  delay(100);
  asm("rjmp SKIP");
  asm("START:");
  Serial.println("The start label was just jumpled to");
  asm("SKIP:");
  // skip START
  if (count>80) {
    count = 0;
    Serial.println(".");
  }
  Serial.print(".");
  count++;
}
