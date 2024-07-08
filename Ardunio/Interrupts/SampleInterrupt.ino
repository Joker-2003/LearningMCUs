const int interruptPin = 2; // External interrupt pin

void setup() {
  pinMode(interruptPin, INPUT_PULLUP); // Initialize pin as input with internal pull-up resistor
  attachInterrupt(digitalPinToInterrupt(interruptPin), ISR, CHANGE); // Attach ISR to pin 2
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Main program loop
}

void ISR() {
  // Interrupt Service Routine (ISR) code
  Serial.println("External interrupt triggered!");
}