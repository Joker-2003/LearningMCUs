//IR circuit is in IR.png file

// Define the pin connected to the output of the IR sensor
#define IR_PIN 10;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
Serial.print("Serial monitor working! Tech team best team! ");
  
  // Set the IR sensor pin as input
  pinMode(IR_PIN, INPUT);
}
void loop() {
  // Read the state of the IR sensor
  int sensorValue = digitalRead(irSensorPin);
  
  // Print the sensor value (1 for detected, 0 for not detected)
  Serial.print("IR Sensor: ");
  Serial.println(sensorValue);
  
  // Add a short delay to prevent flooding the serial monitor
  delay(500);
}