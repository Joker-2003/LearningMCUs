#include <Arduino.h>
#include <motor.h>

// Create motor objects
Motor motor1(8, 9, 5); // IN1, IN2, ENA
Motor motor2(10, 11, 6); // IN3, IN4, ENB

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
