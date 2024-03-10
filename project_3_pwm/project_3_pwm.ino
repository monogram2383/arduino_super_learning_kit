int ledPin = 11; // initialize digital pin 11 (PWM output)
int potPin = 0; // initialize analog pin 0
int val = 0; // temporary store variable's value from the sonsor

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // set baud rate at 9600
  // analog ports automatically set up as "input"
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  Serial.println(val); // display value of val
  analogWrite(ledPin, val / 4); // turn on LED and set up brightness (maximum output of PWM is 255)
  delay(10);
}
