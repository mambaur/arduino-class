int lightLevel;
int relay=13;
int a =13;
int b =11;
int c =10;
int d =9;
int e =8;
void setup() {
  Serial . begin (9600);
  pinMode (relay, OUTPUT);
  pinMode (a, OUTPUT);
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
}

void loop() {
  lightLevel = analogRead (A0);
  Serial . print ( "Light level: " );
  Serial . println (lightLevel, DEC );
  delay(1000);
  if(lightLevel<450){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
  }else{
    digitalWrite(a,LOW);
  }
}
