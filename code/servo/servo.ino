#include <Servo.h>

#define MY_PIN1 2
#define SERVO 9

Servo servo;
int pos = 0;

void setup() {
  Serial.begin(9600);
  pinMode(MY_PIN1, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  servo.attach(SERVO);
//  analogWrite(SERVO, 100);
}

void loop() {
  int serial_status = digitalRead(2);
  Serial.println(serial_status);
  if (serial_status == HIGH) {
    digitalWrite(13, LOW);
    for (pos = 0; pos <= 180; ++pos) {
      servo.write(pos);
      delay(15);
    }
//    analogWrite(SERVO, 220);
  } else {
    digitalWrite(13, HIGH);
    for (pos = 180; pos >= 0; --pos) {
      servo.write(pos);
      delay(15);
    }
//    analogWrite(SERVO, 100);
  }
}
