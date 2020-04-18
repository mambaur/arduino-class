String dataTerima;
void setup() {
  Serial.begin(9600);
  pinMode (13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    dataTerima = Serial.readStringUntil('\n');
    if (dataTerima == "on"){
      digitalWrite (13 , HIGH);
    }
    if (dataTerima == "off") {
      digitalWrite (13 , LOW);
    }
  }

}
