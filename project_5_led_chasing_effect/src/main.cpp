#include <Arduino.h>

int BASE = 2; // the I/O pin for the first LED
int NUM = 6; // number of LEDs

void setup() {
  // put your setup code here, to run once:
  for (int i = BASE; i < BASE + NUM; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = BASE; i < BASE + NUM; i++)
  {
    digitalWrite(i, LOW);
    delay(200);
  }
  for(int i = BASE; i < BASE + NUM; i++)
  {
    digitalWrite(i, HIGH);
    delay(200);
  }
}
