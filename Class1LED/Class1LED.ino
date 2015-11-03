// Let's light up an LED. Connect the long lead ('+') to pin 9, and the short lead to a resistor (330ohm), and the resistor to ground.

// This first section is where you "define" some values
#define LED_PIN 9     //Our LED will be controlled by digital pin 9, which is a PWM pin (adjustable 


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {                
  // initialize the LED pin as an output. pinMode is a built-in command in the Arduino library
  pinMode(LED_PIN, OUTPUT);
  
}  

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(LED_PIN, 255);   // turn the LED on (255 is the maximum value)
  delay(1000);               // wait for a second
  analogWrite(LED_PIN, 0);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
