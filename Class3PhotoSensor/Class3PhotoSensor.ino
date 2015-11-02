// Let's read a photo sensor. Connect one lead to 5V, the other lead to a resistor (10k ohm), the other resistor lead to ground, and the connection between the resistor
// and the photosensor should also connect to pin A1.

// This first section is where you "define" some values
#define SENSOR_PIN 1     //Our photoresistor will be read on pin A1. "A" pins are always INPUT, so we don't need a pinMode statement


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {     
  
  // Let's have the system tell us what it is doing. The "Serial" library allows you send data back to the computer. This initializes it.
  Serial.begin(9600);
}  

// the loop routine runs over and over again forever:
void loop() {
  
  int value = analogRead(SENSOR_PIN);    // Read the value. Can go from 0 to 1023
  Serial.println(value);                 // Print it back to the computer ("ln" at the end tells it to add a carriage return to the end)
  delay(1000);                           // Pause a second
  
}
