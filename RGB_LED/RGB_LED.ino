int redLedPin = 9;
int greenLedPin = 10;
int blueLedPin = 11;
void setup () {
  pinMode (redLedPin, OUTPUT );
  pinMode (greenLedPin, OUTPUT );
  pinMode (blueLedPin, OUTPUT );
}
void loop () {
  
  analogWrite (blueLedPin, random (0, 10));
  analogWrite (greenLedPin, random (0, 10));
  analogWrite (redLedPin, random (0, 10));
  delay (500);
}

