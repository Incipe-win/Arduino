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
    Serial.println("pwd is true");
    servo.write(360);
    delay(1000);
    servo.write(90);
    delay(5000);
    servo.write(-360);
    delay(1000);
    servo.write(90);
  }
  str = "";
}
