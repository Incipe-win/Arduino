void setup() {
  for (int i = 8; i <= 13; ++i) {
    pinMode(i, OUTPUT);
  }
}

int delay_time = 1000;

void loop() {
  digitalWrite(13, LOW);
  digitalWrite(8, HIGH);
  delay(delay_time);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(delay_time);

  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(delay_time);

  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(delay_time);

  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(delay_time);

  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(delay_time);
}
