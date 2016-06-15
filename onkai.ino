#define BEAT 100
#define PINNO_LO 11
#define PINNO_HI 12

//-----初期化-----
void setup() {
  Serial.begin(9600);
}
//-----メイン-----

void loop() {
  delay(10);
  if (digitalRead(8) == HIGH) {
//    Serial.println(F("8pin"));
//    tone(PINNO_LO, 659, BEAT) ; // ミ
//    delay(BEAT) ;
    //案5
    Serial.println(F("8pin"));
    tone(PINNO_LO, 659) ;
    delay(50);
    noTone(PINNO_LO);
    tone(PINNO_HI, 659*2) ;
    delay(50);
    noTone(PINNO_HI);
    //delay(BEAT);
  } else if (digitalRead(7) == HIGH) {
    Serial.println(F("7pin"));
    tone(PINNO_LO, 587) ;
    delay(50);
    noTone(PINNO_LO);
    tone(PINNO_HI, 587*2) ;
    delay(50);
    noTone(PINNO_HI);
  } else if (digitalRead(6) == HIGH) {
    Serial.println(F("6pin"));
    tone(PINNO_LO, 523) ;
    delay(50);
    noTone(PINNO_LO);
    tone(PINNO_HI, 523*2) ;
    delay(50);
    noTone(PINNO_HI);
  } else if (digitalRead(5) == HIGH) {
    Serial.println(F("5pin"));
    tone(PINNO_LO, 494) ;
    delay(50);
    noTone(PINNO_LO);
    tone(PINNO_HI, 494*2) ;
    delay(50);
    noTone(PINNO_HI);
  } else if (digitalRead(4) == HIGH) {
    Serial.println(F("4pin"));
    tone(PINNO_LO, 440) ;
    delay(50);
    noTone(PINNO_LO);
    tone(PINNO_HI, 440*2) ;
    delay(50);
    noTone(PINNO_HI);
  } else if (digitalRead(3) == HIGH) {
    Serial.println(F("3pin"));
    tone(PINNO_LO, 392) ;
    delay(50);
    noTone(PINNO_LO);
    tone(PINNO_HI, 392*2) ;
    delay(50);
    noTone(PINNO_HI);
  }
 // Serial.println(power);
}

