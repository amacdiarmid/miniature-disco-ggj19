#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_D5  587

int const TEMPO = 5000;
int thisNote = 0;

int melody[] = {
  NOTE_G3, NOTE_D4, NOTE_D4, NOTE_D3, NOTE_D4, NOTE_G3, NOTE_D4, NOTE_D4, NOTE_D3, NOTE_D4, NOTE_G3, NOTE_D4, NOTE_D4, NOTE_D3, NOTE_D4, NOTE_G3, NOTE_D5, NOTE_D5,/*PART0*/NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_GS3,/*PART1*/ NOTE_A3, NOTE_F3, NOTE_F3, NOTE_A3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_F3, NOTE_F3, NOTE_A3, NOTE_G3, /*PART2*/ NOTE_G3, NOTE_G3, NOTE_FS3, NOTE_G3, NOTE_FS3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_FS3, NOTE_G3, NOTE_FS3, NOTE_GS3, NOTE_GS3, /*PART3*/ NOTE_DS3, NOTE_F3, NOTE_FS3, NOTE_G3, NOTE_AS3, NOTE_F3, NOTE_G3, NOTE_GS3 
};

int noteDurations[] = {
 32, 64, 64, 32, 32, 32, 64, 64, 32, 32, 32, 64, 64, 32, 32, 16, 32, 32, /*PART0*/32, 32, 32, 16, 32, 16, 8, /*PART1*/ 32, 32, 32, 64, 8, 64, 32, 32, 32, 64, 16, /*PART2*/ 96, 32, 96, 32, 64, 16, 8, 96, 32, 96, 32, 64, 16, 12,/*PART*/ 32, 32, 32, 16, 16, 16, 16, 8
};

//melody = 266 notes

void setup() {

  Serial.begin(9600);
  Serial.print(sizeof(melody));
  playSong();
}

void loop() {
  Serial.print(thisNote);
  if(thisNote == sizeof(melody)/2)
  {
    thisNote = 0;
    playSong();
    Serial.print("testerino");
  }
}

void playSong()
  {
  int melody_len = sizeof(melody)/sizeof(melody[0]);
  
  for (thisNote; thisNote < melody_len; thisNote++) {
    int noteDuration = TEMPO / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.45;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}
