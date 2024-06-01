#include <Wire.h>

#define NUM_BYTE    3

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  Serial.println("done");
}

void loop() {
  /*
  // TEST WRITE
  Wire.beginTransmission((0xA0 >> 1)); // transmit to device #4
  Wire.write(0x11);              // sends one byte
  Wire.write(0x22);              // sends one byte
  Wire.write(0x33);              // sends one byte
  Wire.endTransmission();    // stop transmitting
*/

  // TEST READ
  Wire.requestFrom(0xA0 >> 1, NUM_BYTE);  // Yêu cầu truyền 2 byte từ 2 thanh ghi
  if (Wire.available() <= NUM_BYTE) {     //
    Wire.read();
    Wire.read();
    Wire.read();
  }

  delay(500);
}
