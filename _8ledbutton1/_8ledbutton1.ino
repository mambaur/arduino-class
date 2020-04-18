int ledCount = 14;
int ledPins[] = { 6, 7, 8, 9, 10, 11, 12, 13, 12, 11, 10, 9, 8, 7};
int ledDelay = 300;
int buttonPin = 2;
void setup () {
  for ( int thisLed = 0; thisLed < ledCount; thisLed++) {
     pinMode (ledPins[thisLed], OUTPUT );
  }
    pinMode (buttonPin, INPUT );
}
void loop () {
  for ( int thisLed = 0; thisLed < ledCount; thisLed++) {
    digitalWrite (ledPins[thisLed], HIGH );
    delay (ledDelay);
    while ( digitalRead (buttonPin) == HIGH ) {
      delay (10);   
    }
    digitalWrite (ledPins[thisLed], LOW );
  }
}
