// Let's send a sound to a speaker



// This first section is where you "define" some values
#define SPEAKER_PIN 6    //Our speaker will be controlled by digital pin 6, which is a PWM pin (adjustable)


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {                
  // initialize the speaker pin as an output. pinMode is a built-in command in the Arduino library
  pinMode(SPEAKER_PIN, OUTPUT);
  
}  

// the loop routine runs over and over again forever:
void loop() {

  for (int i=0; i<2000; i=i+10) {   // Loop taking "i" from 0 to 1999, using that as a value for the speaker tone
    tone(SPEAKER_PIN, i);
    delay(10);
  }
  for (int i=2000; i>0; i=i-10) {   // Go the other way
    tone(SPEAKER_PIN, i);
    delay(10);
  }
  
}
