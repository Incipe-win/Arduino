#include <SoftwareSerial.h>
#include <Servo.h>

#define SERVO 9

String str = "";
Servo servo;
int pos = 0;

void setup() {
  Serial.begin(9600);
  servo.attach(SERVO);
}

void loop() {
  if (Serial.available()) {
    while (Serial.available() > 0) {
      char c = Serial.read();
      str += c;
      delay(2);
    }
    Serial.println(str);
  }
  if (str == "incipe") {
    Serial.println("password is true");
    for (pos = 0; pos <= 180; ++pos) {
      servo.write(pos);
      delay(30);
    }
    delay(3000);
    for (pos = 180; pos >= 0; --pos) {
      servo.write(pos);
      delay(30);
    }
  }
  str = "";
}
