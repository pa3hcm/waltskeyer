/*
  Project:   waltskeyer
  Source:    http://github.com/pa3hcm/waltskeyuer
  Authors:   Ernest Neijenhuis PA3HCM
  Copyright: (c) Ernest Neijenhuis PA3HCM
*/

const int DOTTIME = 100;
const int KEYDOWN = 37;
const int KEYUP = 41;

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
  dah();
  dah();
  pauseChar();
  dit();
  pauseChar();
  dit();
  dah();
  dit();
  pauseChar();
  dit();
  dah();
  dit();
  pauseChar();
  dah();
  dit();
  dah();
  dah();
  pauseWord();
  dah();
  dit();
  dit();
  dah();
  pauseChar();
  dah();
  dah();
  pauseChar();
  dit();
  dah();
  pauseChar();
  dit();
  dit();
  dit();
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
  for (int i=60; i > KEYUP; i--) {
    hand.write(i);
    delay(100);
  }
}

void dismount() {
  for (int i=KEYUP; i < 60; i++) {
    hand.write(i);
    delay(100);
  }
}
