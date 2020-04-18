int ledCount = 14;
int ledPins[] = { 6, 7, 8, 9, 10, 11, 12, 13, 12, 11, 10, 9, 8, 7};
int ledDelay = 50;
int buttonPin = 2;
int ledPins1[] = { 6, 7, 8, 9};
int ledPins2[] = { 13, 12, 11, 10};
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
      for ( int thisLed = 0; thisLed < ledCount-1; thisLed++) {
        digitalWrite (ledPins1[thisLed], HIGH );
        digitalWrite (ledPins2[thisLed], HIGH );
        delay (ledDelay);
        digitalWrite (ledPins1[thisLed], LOW );
        digitalWrite (ledPins2[thisLed], LOW );
      }
      for ( int thisLed = ledCount-1; thisLed > 0; thisLed--) {
        digitalWrite (ledPins1[thisLed], HIGH );
        digitalWrite (ledPins2[thisLed], HIGH );
        delay (ledDelay);
        digitalWrite (ledPins1[thisLed], LOW );
        digitalWrite (ledPins2[thisLed], LOW );
      }
    }
    digitalWrite (ledPins[thisLed], LOW );
  }
}
