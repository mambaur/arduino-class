int ledCount1 = 4;
int ledPins1[] = { 6, 7, 8, 9};
int ledCount2 = 4;
int ledPins2[] = { 13, 12, 11, 10};
int ledDelay = 300;
void setup () {
  for ( int thisLed = 0; thisLed < ledCount1; thisLed++) {
    pinMode (ledPins1[thisLed], OUTPUT );
    pinMode (ledPins2[thisLed], OUTPUT );
  }
}
void loop () {
  for ( int thisLed = 0; thisLed < ledCount1-1; thisLed++) {
    digitalWrite (ledPins1[thisLed], HIGH );
    digitalWrite (ledPins2[thisLed], HIGH );
    delay (ledDelay);
    digitalWrite (ledPins1[thisLed], LOW );
    digitalWrite (ledPins2[thisLed], LOW );
  }
  for ( int thisLed = ledCount1-1; thisLed > 0; thisLed--) {
    digitalWrite (ledPins1[thisLed], HIGH );
    digitalWrite (ledPins2[thisLed], HIGH );
    delay (ledDelay);
    digitalWrite (ledPins1[thisLed], LOW );
    digitalWrite (ledPins2[thisLed], LOW );
  }
  
}
