#include <Arduino.h>

// Define motor control pins
const int motor1Pin1 = 21; // Example GPIO pin numbers
const int motor1Pin2 = 22;
const int motor1EnablePin = 19;
const int motor2Pin1 = 23;
const int motor2Pin2 = 25;
const int motor2EnablePin = 26;

void setup() {
  // Initialize motor control pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor1EnablePin, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(motor2EnablePin, OUTPUT);
}

void loop() {
  // Example: Move Motor 1 forward
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(motor1EnablePin, 200); // PWM speed control (0-255)

  // Example: Move Motor 2 backward
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(motor2EnablePin, 150); // PWM speed control (0-255)

  delay(2000); // Run motors for 2 seconds

  // Stop both motors
  digitalWrite(motor1EnablePin, LOW);
  digitalWrite(motor2EnablePin, LOW);

  delay(1000); // Pause for 1 second before next operation
}
