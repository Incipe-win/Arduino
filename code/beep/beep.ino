int pin_Buzzer = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_Buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(pin_Buzzer, 2093);
  delay(1000);
  noTone(pin_Buzzer);
  delay(2000);
}
