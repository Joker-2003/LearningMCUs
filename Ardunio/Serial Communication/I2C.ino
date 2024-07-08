#include <Wire.h>

// Define I2C device address
const int deviceAddress = 0x68; // Example device address (7-bit format)

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  Wire.begin(); // Initialize I2C communication

  // Optional: Uncomment below to set I2C clock frequency (default is 100kHz)
  // Wire.setClock(400000); // Set I2C clock speed to 400kHz
}

void loop() {
  // Example: Read data from an I2C device
  Wire.beginTransmission(deviceAddress); // Start communication with device
  Wire.write(0x00); // Send register address to read from (example address)
  Wire.endTransmission(); // End transmission

  Wire.requestFrom(deviceAddress, 6); // Request 6 bytes of data from device

  while (Wire.available()) {
    byte data = Wire.read(); // Read each byte of data received
    Serial.print(data, HEX); // Print data in hexadecimal format
    Serial.print(" ");
  }
  Serial.println();

  delay(1000); // Delay for 1 second before repeating

}

