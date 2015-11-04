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

// The setup routine runs once when you press reset. It's where you tell the board how to configure itself, among other things.
void setup() {                
  // initialize the pins as outputs. pinMode is a built-in command in the Arduino library
  pinMode(SPEAKER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  
}  

// the loop routine runs over and over again forever:
void loop() {
  
    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(800-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(800-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_G);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_C);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_D);      // Play note
    delay(400-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

    analogWrite(LED_PIN, 255);     // Brighten tree
    tone(SPEAKER_PIN,NOTE_E);      // Play note
    delay(1600-100);                // Pause, leaving room for space between notes
    analogWrite(LED_PIN,128);      // Dim tree
    noTone(SPEAKER_PIN);           // Stop note for space
    delay(100);

}
