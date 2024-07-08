void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read(); // Read incoming data from UART

    // Echo received data back to the sender
    Serial.print("Received: ");
    Serial.println(data);

    // Example: Sending data back over UART
    Serial.print("Sending: ");
    Serial.println(data);
  }
}
