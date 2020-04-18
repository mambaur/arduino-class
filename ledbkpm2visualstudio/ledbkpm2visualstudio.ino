String dataTerima;
void setup() {
  Serial.begin(9600);
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (10, OUTPUT);
}

void loop() {
 if (Serial.available() > 0){
    dataTerima = Serial.readStringUntil('\n');
    
    if (dataTerima == "A") {digitalWrite(10,1);}
    if (dataTerima == "B") {digitalWrite(11,1);}
    if (dataTerima == "C") {digitalWrite(12,1);}
    if (dataTerima == "D") {digitalWrite(13,1);}

    if (dataTerima == "a") {digitalWrite(10,LOW);}
    if (dataTerima == "b") {digitalWrite(11,LOW);}
    if (dataTerima == "c") {digitalWrite(12,LOW);}
    if (dataTerima == "d") {digitalWrite(13,LOW);}
  }

  delay(100);
}
