int pin = 2; //define interrupt pin to 2
volatile int state = LOW;


void setup() {
   pinMode(13, OUTPUT); //set pin 13 as output
   attachInterrupt(digitalPinToInterrupt(pin), ISR, CHANGE); // Attach ISR to pin 2
} 
void loop() { 
   digitalWrite(13, state); //write the state to pin 13
} 

void ISR() { 
   //ISR function
   state = !state; //toggle the state ON INTERUPT
}