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
#define NOTE_Cs5 554
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
  int melody[] = {
    NOTE_C4, NOTE_C4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4,
    NOTE_C4, NOTE_C4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4, NOTE_Cs4,
    NOTE_Ds5, NOTE_Ds5, NOTE_Ds5, NOTE_Ds5, NOTE_Ds5, NOTE_Cs5, NOTE_B4, NOTE_Gs4, NOTE_Gs4,
    NOTE_Ds5, NOTE_Cs5, NOTE_B4, NOTE_Gs4, NOTE_Gs4, NOTE_Fs4, NOTE_Cs5, NOTE_Cs5, NOTE_Ds5, NOTE_B4, NOTE_As4,
    NOTE_As4, NOTE_Gs4, NOTE_Gs4, NOTE_Gs4, NOTE_Ds5, NOTE_Cs5, NOTE_B4, NOTE_Gs4, NOTE_Gs4, NOTE_Fs4,
    NOTE_Cs5, NOTE_Cs5, NOTE_Ds5, NOTE_B4, NOTE_As4, NOTE_As4, NOTE_Gs3, NOTE_Gs3, NOTE_Gs3, NOTE_Cs4,
    NOTE_Ds4, NOTE_Ds4, NOTE_Cs4, NOTE_Ds4, NOTE_B3, NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4,
    NOTE_B3, NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_B3,
    NOTE_Cs4, NOTE_Ds4, NOTE_Cs4, NOTE_B3, NOTE_Gs3, NOTE_Cs4, NOTE_Ds4, NOTE_Ds4,
    NOTE_Cs4, NOTE_Ds4, NOTE_B3, NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_B3, NOTE_Cs4,
    NOTE_Ds4, NOTE_Cs4, NOTE_B3, NOTE_Gs3, NOTE_Ds4, NOTE_Ds4, NOTE_Cs4, NOTE_Cs4, NOTE_Ds4,
    NOTE_Gs4, NOTE_Ds4, NOTE_Cs4, NOTE_As3, NOTE_Gs3, NOTE_As3, NOTE_Gs3, NOTE_As3,
    NOTE_Gs3, NOTE_Cs4, NOTE_B3, NOTE_As3, NOTE_Gs3, NOTE_Ds4, NOTE_Ds4, NOTE_Cs4, NOTE_Cs4,
    NOTE_Ds4, NOTE_Gs4, NOTE_Ds4, NOTE_Cs4, NOTE_As3, NOTE_Gs3, NOTE_As3, NOTE_Gs3, NOTE_As3,
    NOTE_Gs3, NOTE_Cs4, NOTE_B3, NOTE_As3, NOTE_Gs3, NOTE_Cs4, NOTE_Ds4, NOTE_Ds4, NOTE_Cs4,
    NOTE_Ds4, NOTE_Gs3, NOTE_B3, NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_B3, NOTE_Cs4,
    NOTE_Ds4, NOTE_Cs4, NOTE_B3, NOTE_Gs3, NOTE_Ds4, NOTE_Ds4, NOTE_Cs4, NOTE_Cs4, NOTE_Ds4,
    NOTE_Gs3, NOTE_B3, NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_Ds4,
    NOTE_Cs4, NOTE_B3, NOTE_Gs3, NOTE_Ds4, NOTE_Ds4, NOTE_Cs4, NOTE_Cs4, NOTE_Ds4, NOTE_Gs3,
    NOTE_B3, NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_Ds4, NOTE_Cs4,
    NOTE_B3, NOTE_Gs3, NOTE_Ds4, NOTE_Ds4, NOTE_Cs4, NOTE_Cs4, NOTE_Ds4, NOTE_Gs3, NOTE_B3,
    NOTE_Cs4, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_B3, NOTE_Cs4, NOTE_Ds4, NOTE_Cs4, NOTE_B3,
    NOTE_Gs3
  };
  int noteDurations[] = {
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4
  };

  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }

  while (1); // Loop indefinitely after playing the melody once
}
