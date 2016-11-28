#define PINNO 11 //圧電ブザー

int zennon[15] = {262, 294, 330, 349, 392, 440, 494, 523, 587, 659, 698, 784, 880, 988, 1047}; //全音2オクターブ分
int hannon[11] = {277, 311, 370, 415, 466, 554, 622, 740, 831, 932, 1109}; //半音2オクターブ分
int countZEN = 0;
int countHAN = 0;
int toneDelay = 100;

//-----初期化-----
void setup() {
  Serial.begin(9600);
  Serial.println(F("Hello!"));
  for (int i = 0; i < 5; i++) {
    tone(PINNO, zennon[countZEN + 6]) ;
    delay(toneDelay + 10);
    noTone(PINNO);
  }
}
//-----メイン-----

void loop() {
  delay(10);
  if (digitalRead(9) == HIGH) {//ド(↑)
    tone(PINNO, zennon[countZEN + 7]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(8) == HIGH) {//シ
    tone(PINNO, zennon[countZEN + 6]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(7) == HIGH) {//ラ
    tone(PINNO, zennon[countZEN + 5]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(6) == HIGH) {//ソ
    tone(PINNO, zennon[countZEN + 4]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(5) == HIGH) {//ファ
    tone(PINNO, zennon[countZEN + 3]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(4) == HIGH) {//ミ
    tone(PINNO, zennon[countZEN + 2]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(3) == HIGH) {//レ
    tone(PINNO, zennon[countZEN + 1]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(2) == HIGH) {//ド
    tone(PINNO, zennon[countZEN]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (analogRead(A0) >= 500) {//ド#(↑)
    tone(PINNO, hannon[countHAN + 5]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (analogRead(A1) >= 500) {//ラ#
    tone(PINNO, hannon[countHAN + 4]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (analogRead(A2) >= 500) {//ソ#
    tone(PINNO, hannon[countHAN + 3]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (analogRead(A3) >= 500) {//ファ#
    tone(PINNO, hannon[countHAN + 2]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (analogRead(A4) >= 500) {//レ#
    tone(PINNO, hannon[countHAN + 1]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (analogRead(A5) >= 500) {//ド#
    tone(PINNO, hannon[countHAN]) ;
    delay(toneDelay);
    noTone(PINNO);
  } else if (digitalRead(10) == HIGH) {//音階を左にシフト
    Serial.println(F("10pin"));
    countZEN--;
    if (countZEN < 0 )
      countZEN = 0;
    else if (7 < countZEN)
      countZEN = 7;
    delay(500);
  } else if (digitalRead(12) == HIGH) {//音階を右にシフト
    Serial.println(F("12pin"));
    countZEN++;
    if (countZEN < 0 )
      countZEN = 0;
    else if (7 < countZEN)
      countZEN = 7;
    delay(500);
  } else if (digitalRead(13) == HIGH) {//音階1オクターブ切り替え
    Serial.println(F("13pin"));
    if (countZEN < 7 ) {
      countZEN = 7;
      countHAN = 5;
    } else if (countZEN > 6) {
      countZEN = 0;
      countHAN = 0;
    }
    delay(500);
  }
  digitalRead(2) == HIGH ? Serial.print(F("D2")) : Serial.print(F("- "));
  digitalRead(3) == HIGH ? Serial.print(F("D3")) : Serial.print(F("- "));
  digitalRead(4) == HIGH ? Serial.print(F("D4")) : Serial.print(F("- "));
  digitalRead(5) == HIGH ? Serial.print(F("D5")) : Serial.print(F("- "));
  digitalRead(6) == HIGH ? Serial.print(F("D6")) : Serial.print(F("- "));
  digitalRead(7) == HIGH ? Serial.print(F("D7")) : Serial.print(F("- "));
  digitalRead(8) == HIGH ? Serial.print(F("D8")) : Serial.print(F("- "));
  digitalRead(9) == HIGH ? Serial.print(F("D9")) : Serial.print(F("- "));
  Serial.print(F("\t"));
  Serial.print(F("A5:"));
  Serial.print(analogRead(A5));
  Serial.print(F("\t"));
  Serial.print(F("A4:"));
  Serial.print(analogRead(A4));
  Serial.print(F("\t"));
  Serial.print(F("A3:"));
  Serial.print(analogRead(A3));
  Serial.print(F("\t"));
  Serial.print(F("A2:"));
  Serial.print(analogRead(A2));
  Serial.print(F("\t"));
  Serial.print(F("A1:"));
  Serial.print(analogRead(A1));
  Serial.print(F("\t"));
  Serial.print(F("A0:"));
  Serial.println(analogRead(A0));


}
