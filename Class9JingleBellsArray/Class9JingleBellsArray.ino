// Let's send a sound to a speaker

// Notes of a middle scale, in Hertz
#define NOTE_C  523
#define NOTE_CS 554
#define NOTE_D  587
#define NOTE_DS 622
#define NOTE_E  659
#define NOTE_F  698
#define NOTE_FS 740
#define NOTE_G  784
#define NOTE_GS 831
#define NOTE_A  880
#define NOTE_AS 932
#define NOTE_B  988
#define NOTE_C2  1047


// This first section is where you "define" some values
#define SPEAKER_PIN 6    //Our speaker will be controlled by digital pin 6, which is a PWM pin (adjustable)
#define LED_PIN 9     //Our LED will be controlled by digital pin 9, which is a PWM pin (adjustable)

int song_tones[] = { NOTE_E, NOTE_E, NOTE_E, NOTE_E, NOTE_E, NOTE_E, NOTE_E, NOTE_G, NOTE_C, NOTE_D, NOTE_E, 
NOTE_F, NOTE_F, NOTE_F, NOTE_F, NOTE_F, NOTE_E, NOTE_E, NOTE_E, NOTE_E, NOTE_D, NOTE_D,  NOTE_E, NOTE_D, NOTE_G, 0};

int song_times[] = {2,2,4,2,2,4,2,2,2,2,8,2,2,3,1,2,2,3,1,2,2,2,2,4,4};


// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {                
  // initialize the pins as outputs. pinMode is a built-in command in the Arduino library
  pinMode(SPEAKER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  
}  

// the loop routine runs over and over again forever:
void loop() {
  
  for (int i=0; song_tones[i] != 0; i=i+1) {
    analogWrite(LED_PIN, 255);
    tone(SPEAKER_PIN,song_tones[i]);
    int tone_length = song_times[i] * 200 - 100;
    delay(tone_length);
    analogWrite(LED_PIN,128);
    noTone(SPEAKER_PIN);
    delay(100);
  }  

}
