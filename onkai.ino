#define PINNO 11 //圧電ブザー

//-----初期化-----
void setup() {
  Serial.begin(9600);
}
//-----メイン-----

void loop() {
  delay(10);
  if (digitalRead(9) == HIGH) {//ド(↑)
    Serial.println(F("9pin"));
    tone(PINNO, 523) ;
    delay(50);
    noTone(PINNO);
  } else if (digitalRead(8) == HIGH) {//シ
    Serial.println(F("8pin"));
    tone(PINNO, 494) ;
    delay(50);
    noTone(PINNO);
  } else if (digitalRead(7) == HIGH) {//ラ
    Serial.println(F("7pin"));
    tone(PINNO, 440) ;
    delay(50);
    noTone(PINNO);
  } else if (digitalRead(6) == HIGH) {//ソ
    Serial.println(F("6pin"));
    tone(PINNO, 392) ;
    delay(50);
    noTone(PINNO);
  } else if (digitalRead(5) == HIGH) {//ファ
    Serial.println(F("5pin"));
    tone(PINNO, 349) ;
    delay(50);
    noTone(PINNO);
  } else if (digitalRead(4) == HIGH) {//ミ
    Serial.println(F("4pin"));
    tone(PINNO, 330) ;
    delay(50);
    noTone(PINNO);
 } else if (digitalRead(3) == HIGH) {//レ
    Serial.println(F("3pin"));
    tone(PINNO, 294) ;
    delay(50);
    noTone(PINNO);
 } else if (digitalRead(2) == HIGH) {//ド
    Serial.println(F("2pin"));
    tone(PINNO, 262) ;
    delay(50);
    noTone(PINNO);
 } else if (analogRead(A0) >= 500) {//ド#(↑)
    Serial.println(F("A0pin"));
    tone(PINNO, 277*2) ;
    delay(50);
    noTone(PINNO);
 } else if (analogRead(A1) >= 500) {//ラ#
    Serial.println(F("A1pin"));
    tone(PINNO, 466) ;
    delay(50);
    noTone(PINNO);
 } else if (analogRead(A2) >= 500) {//ソ#
    Serial.println(F("A2pin"));
    tone(PINNO, 415) ;
    delay(50);
    noTone(PINNO);
 } else if (analogRead(A3) >= 500) {//ファ#
    Serial.println(F("A3pin"));
    tone(PINNO, 370) ;
    delay(50);
    noTone(PINNO);
 } else if (analogRead(A4) >= 500) {//レ#
    Serial.println(F("A4pin"));
    tone(PINNO, 311) ;
    delay(50);
    noTone(PINNO);
 } else if (analogRead(A5) >= 500) {//ド#
    Serial.println(F("A5pin"));
    tone(PINNO, 277) ;
    delay(50);
    noTone(PINNO);
 }
}

