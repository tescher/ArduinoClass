// Let's let the sensor control the speaker. Connect one lead of the speaker to pin 6, and one lead to ground.



// This first section is where you "define" some values
#define SPEAKER_PIN 6    //Our speaker will be controlled by digital pin 6, which is a PWM pin (adjustable)
#define SENSOR_PIN 1     //Our photoresistor will be read on pin A1. "A" pins are always INPUT, so we don't need a pinMode statement


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {                
  // initialize the speaker pin as an output. pinMode is a built-in command in the Arduino library
  pinMode(SPEAKER_PIN, OUTPUT);
  
}  

// the loop routine runs over and over again forever:
void loop() {

  int value = analogRead(SENSOR_PIN);    // Read the value. Can go from 0 to 1023
  Serial.println(value);                 // Print it back to the computer ("ln" at the end tells it to add a carriage return to the end)
  tone(SPEAKER_PIN, value);              // send it as a freqency to the speaker

}
