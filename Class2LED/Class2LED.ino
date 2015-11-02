// Let's make the light variable. Connect the long lead ('+') to pin 9, and the short lead to a resistor (330ohm), and the resistor to ground.

// This first section is where you "define" some values
#define LED_PIN 9     //Our LED will be controlled by digital pin 9, which is a PWM pin (adjustable 


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {                
  // initialize the LED pin as an output. pinMode is a built-in command in the Arduino library
  pinMode(LED_PIN, OUTPUT);
  
}  

// the loop routine runs over and over again forever:
void loop() {
  
  for (int i=0; i<=255; i=i+1) {     // Loop with "i" going from 0 to 255
    analogWrite(LED_PIN,i);          // Use "i" as the value for the LED
    delay(10);                       // Put a little delay in (10ms - 0.01 seconds)
  }  
  for (int i=255; i>= 0; i=i-1) {     // Let's go the other direction
    analogWrite(LED_PIN,i);         
    delay(10);                      
  }  
  
}
