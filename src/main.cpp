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
    //Adding
    //New line
    break;
    case RIGHT_ARROW:
    Serial.println("RIGHT");
    //test
    break;
    case UP_ARROW:
    Serial.println("UP");
    //New line
    break;
    case VOLplus:
    Serial.println("Volume plus");
    //more changes
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