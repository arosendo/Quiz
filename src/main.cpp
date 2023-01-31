#include <Arduino.h>
#include <IRdecoder.h>
#include <ir_codes.h>

IRDecoder decoder(14);

void checkRemote() {
  int16_t code = decoder.getKeyCode();
  switch (code) {
    case LEFT_ARROW:
    Serial.println("LEFT");
    //Do something fancy here, or set a specific state!
    //Other fancy things too!
    //Adding more lines
    break;
    case RIGHT_ARROW:
    Serial.println("RIGHT");
    break;
    case UP_ARROW:
    Serial.println("UP");
    break;
    case DOWN_ARROW:
    Serial.println("DOWN");
    break;
  }
}

void setup() {
  Serial.begin(9600);
  decoder.init();
}

void loop() {
  checkRemote();
  //Running fancy codes here!
}