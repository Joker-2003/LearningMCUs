//Relay circuit is in relay.png file

#define RELAY_PIN 7
void setup()
{
	// initialize digital pin RELAY_PIN as an output.
	pinMode(RELAY_PIN, OUTPUT);
}
void loop()
{
	digitalWrite(RELAY_PIN, HIGH); // turn the RELAY on
	delay(1000);				   // wait for a second
	digitalWrite(RELAY_PIN, LOW);  // turn the RELAY off
	delay(1000);				   // wait for a second
}
