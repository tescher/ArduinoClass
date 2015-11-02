// Have the LED go the other direction from the sensor value

// This first section is where you "define" some values
#define SENSOR_PIN 1     //Our photoresistor will be read on pin A1. "A" pins are always INPUT, so we don't need a pinMode statement
#define LED_PIN 9     //Our LED will be controlled by digital pin 9, which is a PWM pin (adjustable 


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {     

  // initialize the LED pin as an output. pinMode is a built-in command in the Arduino library
  pinMode(LED_PIN, OUTPUT);
  
  // Let's have the system tell us what it is doing. The "Serial" library allows you send data back to the computer. This initializes it.
  Serial.begin(9600);
}  

// the loop routine runs over and over again forever:
void loop() {
  
  int value = analogRead(SENSOR_PIN);    // Read the value. Can go from 0 to 1023
  Serial.println(value);                 // Print it back to the computer ("ln" at the end tells it to add a carriage return to the end)

  long led_value = value * 256 / 1024;    // Get it back in the range of 0 to 255 for the LED. Use "long" to give us enough room for the calculation
  
  led_value = 255 - led_value;           // Make the LED do the opposite
  
  analogWrite(LED_PIN,led_value);

}
