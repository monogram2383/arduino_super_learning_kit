#include <Arduino.h>

int buzzer = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char i,j; //define variable
  while (true)
  {
    for (int i = 0; i < 80; i++) // output a frequency sound
    {
      digitalWrite(buzzer, HIGH);
      delay(1);
      digitalWrite(buzzer, LOW);
      delay(1);
    }

    for (int i = 0; i < 100; i++) // output a frequency sound
    {
      digitalWrite(buzzer, HIGH);
      delay(2);
      digitalWrite(buzzer, LOW);
      delay(2);
    }
    
  }
  
}
