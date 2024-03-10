#include <Arduino.h>

int redpin = 7; //select the pin for the red LED
int bluepin =6; // select the pin for the blue LED
int greenpin =5;// select the pin for the green LED
int val;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int val = 255; val > 0; val--)
  {
    /* code */
    analogWrite(redpin, val);
    analogWrite(bluepin, 255-val);
    analogWrite(redpin, 128-val);
    delay(1);
  }
  for (int val = 0; val < 255; val++)
  {
    /* code */
    analogWrite(redpin, val);
    analogWrite(bluepin, 255-val);
    analogWrite(redpin, 128-val);
    delay(1);
  }
  Serial.println(val, DEC);
}
