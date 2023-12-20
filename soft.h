#include <SoftwareSerial.h>

SoftwareSerial swSerial(6,7);

void setup(){
  swSerial.begin(9600);
  Serial.begin(9600);
}

void loop(){
  while(swSerial.available()){
    Serial.write(swSerial.read());
    delay(1);
  }
}
