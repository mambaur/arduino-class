int ledCount = 14;
int ledPins[] = { 6, 7, 8, 9, 10, 11, 12, 13, 12, 11, 10, 9, 8, 7};
int buttonPin = 2;
int a = 0;
int b = 0;
int buttonState = 0;
void setup () {
  for ( int thisLed = 0; thisLed < ledCount; thisLed++) {
     pinMode (ledPins[thisLed], OUTPUT );
  }
    pinMode (buttonPin, INPUT );
}
void loop () {
  buttonState = digitalRead(buttonPin);
  if(buttonState != a){
    if(buttonState == HIGH){
      b++;
    }
  }
  a = buttonState;
  if (b % 2 == 0) {
    for ( int thisLed = 0; thisLed < ledCount; thisLed++) {
      digitalWrite (ledPins[thisLed], HIGH );
      delay (300);
      digitalWrite (ledPins[thisLed], LOW );
    }
  }
}
