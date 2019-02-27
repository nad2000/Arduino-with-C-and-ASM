const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void flash(int ms) {
  digitalWrite(ledPin, HIGH);
  delay(ms);
  digitalWrite(ledPin, LOW);
  delay(ms);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int delayPeriod = 100;
  static int direction = 1;
  flash(delayPeriod);
  if ((delayPeriod == 1000) || (delayPeriod == 0)) {
    direction *= -1;
  }
  delayPeriod += 100*direction;
}
