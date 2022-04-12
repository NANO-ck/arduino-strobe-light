int Led1 = 10;
int waitOnHigh = 40;
int waitOnLow = 45;

void setup() {
  pinMode(Led1, OUTPUT);
}

void loop() {
  digitalWrite(Led1, HIGH);
  delay(waitOnHigh);
  digitalWrite(Led1, LOW);
  delay(waitOnLow);
}
