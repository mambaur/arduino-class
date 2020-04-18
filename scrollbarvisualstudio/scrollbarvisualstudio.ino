String dataTerima;
int nDelay = 1000;

void setup() {
  Serial.begin(9600);
  pinMode (13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    dataTerima = Serial.readStringUntil('\n');
    nDelay = dataTerima.toInt();
  }

  digitalWrite (13, digitalRead(13) ^ 1);
  delay (nDelay);
}
