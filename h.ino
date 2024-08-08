#include <Arduino.h>
#include <motor.h>

// Define motor control pins
const int motor1Pin1 = 21; // Example GPIO pin numbers
const int motor1Pin2 = 22;
const int motor1EnablePin = 19;
const int motor2Pin1 = 23;
const int motor2Pin2 = 25;
const int motor2EnablePin = 26;

// Create motor objects
Motor motor1(motor1Pin1, motor1Pin2, motor1EnablePin);
Motor motor2(motor2Pin1, motor2Pin2, motor2EnablePin);

void setup() {
  // Initialize motors
  motor1.begin();
  motor2.begin();
}

void loop() {
  // Example: Move Motor 1 forward
  motor1.setDirection(FORWARD);
  motor1.setSpeed(200); // PWM speed control (0-255)
  motor1.run();

  // Example: Move Motor 2 backward
  motor2.setDirection(BACKWARD);
  motor2.setSpeed(150); // PWM speed control (0-255)
  motor2.run();

  delay(2000); // Run motors for 2 seconds

  // Stop both motors
  motor1.stop();
  motor2.stop();

  delay(1000); // Pause for 1 second before next operation
}
