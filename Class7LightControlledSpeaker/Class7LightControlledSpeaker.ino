// Let's send a sound to a speaker. Connect one lead of the speaker to pin 6, and one lead to ground.



// This first section is where you "define" some values
#define SPEAKER_PIN 6    //Our speaker will be controlled by digital pin 6, which is a PWM pin (adjustable)


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {                
  // initialize the speaker pin as an output. pinMode is a built-in command in the Arduino library
  pinMode(SPEAKER_PIN, OUTPUT);
  
}  

// the loop routine runs over and over again forever:
void loop() {
  // Tone is a built-in command to send a note to the speaker. First parameter is the speaker pin, second is the frequency, third is the duration. It starts the note and returns
  // right away, so we also have to do a delay afterward.
  tone(SPEAKER_PIN, 440, 1000);  // send the note "A" to the pin for one second (middle A on a piano is 440 Hz)
  delay(1000);                   // Let the note finish
  delay(1000);                   // Pause for 1 second of silence;
}
