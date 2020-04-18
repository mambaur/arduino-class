int ledCount = 8;
int ledPins[] = { 6, 7, 8, 9, 10, 11, 12, 13};
int ledDelay = 300;
void setup () {
  for ( int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode (ledPins[thisLed], OUTPUT );
  }
}
void loop () {
  for ( int thisLed = 0; thisLed < ledCount-1; thisLed++) {
    digitalWrite (ledPins[thisLed], HIGH );
    delay (ledDelay);
    digitalWrite (ledPins[thisLed], LOW );
  }
  for ( int thisLed = ledCount-1; thisLed > 0; thisLed--) {
    digitalWrite (ledPins[thisLed], HIGH );
    delay (ledDelay);
    digitalWrite (ledPins[thisLed], LOW );
  }
}
