/*
  Project:   waltskeyer
  Source:    http://github.com/pa3hcm/waltskeyer
  Author:    Ernest Neijenhuis PA3HCM
*/

const int DOTTIME = 100;
const int KEYDOWN = 37;
const int KEYUP = 41;
const int KEYSLEEP = 60;

#include <Servo.h>
Servo hand;

void setup() {
  hand.attach(3);
}

void loop() {
  mount();
  delay(400);
  message();
  delay(200);
  dismount();
  delay(5000);
  
}


void message() {
  dah(); dah();               // M
  pauseChar();
  dit();                      // E
  pauseChar();
  dit(); dah(); dit();        // R
  pauseChar();
  dit(); dah(); dit();        // R
  pauseChar();
  dah(); dit(); dah(); dah(); // Y
  pauseWord();
  dah(); dit(); dit(); dah(); // X
  pauseChar();
  dah(); dah();               // M
  pauseChar();
  dit(); dah();               // A
  pauseChar();
  dit(); dit(); dit();        // S
}

void pa3hcm() {
  dit();
  dah();
  dah();
  dit();
  pauseChar();
  dit();
  dah();
  pauseChar();
  dit();
  dit();
  dit();
  dah();
  dah();
  pauseChar();
  dit();
  dit();
  dit();
  dit();
  pauseChar();
  dah();
  dit();
  dah();
  dit();
  pauseChar();
  dah();
  dah();
  pauseWord();
}

void dit() {
  hand.write(KEYDOWN);
  delay(DOTTIME);
  hand.write(KEYUP);
  delay(DOTTIME - 20);
}

void dah() {
  hand.write(KEYDOWN);
  delay(DOTTIME*3);
  hand.write(KEYUP);
  delay(DOTTIME - 20);
}

void pauseChar() {
  delay(DOTTIME * 3);
}

void pauseWord() {
  delay(DOTTIME * 7);
}

void mount() {
  for (int i=KEYSLEEP; i > KEYUP; i--) {
    hand.write(i);
    delay(100);
  }
}

void dismount() {
  for (int i=KEYUP; i < KEYSLEEP; i++) {
    hand.write(i);
    delay(100);
  }
}
