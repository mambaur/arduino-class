String dataTerima;
void setup() {
  Serial.begin(9600);
  pinMode (13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    dataTerima = Serial.readStringUntil('\n');
    while (dataTerima == "on"){
      analogWrite ( 13 , 255 );
      delay (500);
      analogWrite ( 13 , 1 );
      delay (500);
    }
    if (dataTerima == "off") {
      digitalWrite (13 , LOW);
    }
  }

}
