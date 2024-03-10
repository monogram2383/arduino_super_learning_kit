int redPin = 10;
int yellowPin = 11;
int bluePin = 12;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(bluePin, HIGH); // turn on blue LED
  delay(5000);
  digitalWrite(bluePin, LOW); // turn off blue LED

  for (int i = 0; i < 3; i++) // blink yellow LED 3 times
  {
    delay(500);
    digitalWrite(yellowPin, HIGH);
    delay(500);
    digitalWrite(yellowPin, LOW);
  }
  delay(500);

  digitalWrite(redPin, HIGH);
  delay(5000);
  digitalWrite(redPin, LOW);
}
