#define BEAT 100
#define PINNO_LO 11

//-----初期化-----
void setup() {
  Serial.begin(9600);
}
//-----メイン-----

void loop() {
  delay(10);
  if (digitalRead(9) == HIGH) {//ド(↑)
    Serial.println(F("9pin"));
    tone(PINNO_LO, 523) ;
    delay(50);
    noTone(PINNO_LO);
  } else if (digitalRead(8) == HIGH) {//シ
    Serial.println(F("8pin"));
    tone(PINNO_LO, 494) ;
    delay(50);
    noTone(PINNO_LO);
  } else if (digitalRead(7) == HIGH) {//ラ
    Serial.println(F("7pin"));
    tone(PINNO_LO, 440) ;
    delay(50);
    noTone(PINNO_LO);
  } else if (digitalRead(6) == HIGH) {//ソ
    Serial.println(F("6pin"));
    tone(PINNO_LO, 392) ;
    delay(50);
    noTone(PINNO_LO);
  } else if (digitalRead(5) == HIGH) {//ファ
    Serial.println(F("5pin"));
    tone(PINNO_LO, 349) ;
    delay(50);
    noTone(PINNO_LO);
  } else if (digitalRead(4) == HIGH) {//ミ
    Serial.println(F("4pin"));
    tone(PINNO_LO, 330) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (digitalRead(3) == HIGH) {//レ
    Serial.println(F("3pin"));
    tone(PINNO_LO, 294) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (digitalRead(2) == HIGH) {//ド
    Serial.println(F("2pin"));
    tone(PINNO_LO, 262) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (analogRead(A0) >= 500) {//ド#(↑)
    Serial.println(F("A0pin"));
    tone(PINNO_LO, 277*2) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (analogRead(A1) >= 500) {//ラ#
    Serial.println(F("A1pin"));
    tone(PINNO_LO, 466) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (analogRead(A2) >= 500) {//ソ#
    Serial.println(F("A2pin"));
    tone(PINNO_LO, 415) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (analogRead(A3) >= 500) {//ファ#
    Serial.println(F("A3pin"));
    tone(PINNO_LO, 370) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (analogRead(A4) >= 500) {//レ#
    Serial.println(F("A4pin"));
    tone(PINNO_LO, 311) ;
    delay(50);
    noTone(PINNO_LO);
 } else if (analogRead(A5) >= 500) {//ド#
    Serial.println(F("A5pin"));
    tone(PINNO_LO, 277) ;
    delay(50);
    noTone(PINNO_LO);
 }
 // Serial.println(power);
}

