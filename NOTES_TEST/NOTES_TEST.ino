#define NOTE_C2 65
#define NOTE_D2 73
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_G2 98
#define NOTE_A2 110
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_D6 1175
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_G6 1568
#define NOTE_A6 1760
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_Fs2 92
#define NOTE_Gs2 103
#define NOTE_As2 116
#define NOTE_Cs3 138
#define NOTE_Ds3 155
#define NOTE_Fs3 185
#define NOTE_Gs3 207
#define NOTE_As3 233
#define NOTE_Cs4 277
#define NOTE_Ds4 311
#define NOTE_Fs4 369
#define NOTE_Gs4 415
#define NOTE_As4 466
#define NOTE_Ds5 622
#define NOTE_Fs5 739
#define NOTE_Gs5 830
#define NOTE_As5 932
#define NOTE_Cs6 1109
#define NOTE_Ds6 1245
#define NOTE_Fs6 1479
#define NOTE_Gs6 1661
#define NOTE_As6 1865

#define BUZZER_PIN 3

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  playNote(NOTE_C2, 500);
  playNote(NOTE_D2, 500);
  playNote(NOTE_E2, 500);
  playNote(NOTE_F2, 500);
  playNote(NOTE_G2, 500);
  playNote(NOTE_A2, 500);
  playNote(NOTE_B2, 500);
  playNote(NOTE_C3, 500);
  playNote(NOTE_D3, 500);
  playNote(NOTE_E3, 500);
  playNote(NOTE_F3, 500);
  playNote(NOTE_G3, 500);
  playNote(NOTE_A3, 500);
  playNote(NOTE_B3, 500);
  playNote(NOTE_C4, 500);
  playNote(NOTE_D4, 500);
  playNote(NOTE_E4, 500);
  playNote(NOTE_F4, 500);
  playNote(NOTE_G4, 500);
  playNote(NOTE_A4, 500);
  playNote(NOTE_B4, 500);
  playNote(NOTE_C5, 500);
  playNote(NOTE_D5, 500);
  playNote(NOTE_E5, 500);
  playNote(NOTE_F5, 500);
  playNote(NOTE_G5, 500);
  playNote(NOTE_A5, 500);
  playNote(NOTE_B5, 500);
  playNote(NOTE_C6, 500);
  playNote(NOTE_D6, 500);
  playNote(NOTE_E6, 500);
  playNote(NOTE_F6, 500);
  playNote(NOTE_G6, 500);
  playNote(NOTE_A6, 500);
  playNote(NOTE_B6, 500);
  playNote(NOTE_C7, 500);
  playNote(NOTE_Fs2, 500);
  playNote(NOTE_Gs2, 500);
  playNote(NOTE_As2, 500);
  playNote(NOTE_Cs3, 500);
  playNote(NOTE_Ds3, 500);
  playNote(NOTE_Fs3, 500);
  playNote(NOTE_Gs3, 500);
  playNote(NOTE_As3, 500);
  playNote(NOTE_Cs4, 500);
  playNote(NOTE_Ds4, 500);
  playNote(NOTE_Fs4, 500);
  playNote(NOTE_Gs4, 500);
  playNote(NOTE_As4, 500);
  playNote(NOTE_Cs5, 500);
  playNote(NOTE_Ds5, 500);
  playNote(NOTE_Fs5, 500);
  playNote(NOTE_Gs5, 500);
  playNote(NOTE_As5, 500);
  playNote(NOTE_Cs6, 500);
  playNote(NOTE_Ds6, 500);
  playNote(NOTE_Fs6, 500);
  playNote(NOTE_Gs6, 500);
  playNote(NOTE_As6, 500);
}

void playNote(int noteFrequency, int noteDuration) {
  tone(BUZZER_PIN, noteFrequency, noteDuration);
  delay(noteDuration);
  noTone(BUZZER_PIN);
  delay(50); 
}
