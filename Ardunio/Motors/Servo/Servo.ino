#include <Servo.h>

Servo myServo;			// Create a servo object
const int potPin = A0;	// Analog pin connected to the potentiometer
const int servoPin = 9; // PWM pin connected to the servo
void setup()
{
	myServo.attach(servoPin); // Attach the servo on pin 9 to the servo object
}
void loop()
{
	int potValue = analogRead(potPin);			// Read the potentiometer value (0-1023)
	int angle = map(potValue, 0, 1023, 0, 180); // Map the potentiometer value to a servo angle (0-180)
	myServo.write(angle);						// Set the servo position according to the mapped value
	delay(15);									// Small delay to allow the servo to reach the position
}

//circuit is in servo.png file