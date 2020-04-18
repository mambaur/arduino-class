int led1 = 8;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int kran = 13;
int lightLevel;
int waterLevel;
int buttonPin = 2;
String buttonState;
int a = 1;
int b = 1;
int c = 1;
int d = 1;
int e = 1;
int k = 2;

void setup () {
  Serial . begin (9600);
  pinMode (led1, OUTPUT );
  pinMode (led2, OUTPUT );
  pinMode (led3, OUTPUT );
  pinMode (led4, OUTPUT );
  pinMode (led5, OUTPUT );
  pinMode (kran, OUTPUT );
  pinMode (buttonPin, INPUT );
}
void loop (){
  lightLevel = analogRead (A1);
  waterLevel = analogRead (A0);
  Serial . print ( "Light level: " );
  Serial . println (lightLevel, DEC );
  //Serial . print ( "Water level: " );
  //Serial . println (waterLevel, DEC );

  //-----------smart lamp ----------------
  //Konfigurasi button pada smart lamp
  buttonState = Serial.readStringUntil('\n');
  if (buttonState == "A"){a++;}
  if (buttonState == "B"){b++;}
  if (buttonState == "C"){c++;}
  if (buttonState == "D"){d++;}
  if (buttonState == "E"){e++;}
  
  if (lightLevel > 40){
    if (a%2 == 0){digitalWrite (led1, LOW );} // lampu 1
    else{digitalWrite (led1, HIGH );}

    if (b%2 == 0){digitalWrite (led2, LOW );} //lampu 2
    else{digitalWrite (led2, HIGH );}

    if (c%2 == 0){digitalWrite (led3, LOW );} // lampu 3
    else{digitalWrite (led3, HIGH );}

    if (d%2 == 0){digitalWrite (led4, LOW );} // lampu 4
    else{digitalWrite (led4, HIGH );}

    if (e%2 == 0){digitalWrite (led5, LOW );}// lampu 5
    else{digitalWrite (led5, HIGH );}
    
  }else {
    if(lightLevel<=35){a=1;b=1;c=1;d=1;e=1;}
    digitalWrite (led1, LOW );
    digitalWrite (led2, LOW );
    digitalWrite (led3, LOW );
    digitalWrite (led4, LOW );
    digitalWrite (led5, LOW );
    delay(1000);
  }

//-------------smart kran-----------------
  if (20>waterLevel>0){
      do {
        buttonState = Serial.readStringUntil('\n');
        if (buttonState == "K"){k++;}
        
        waterLevel = analogRead (A0);

        if (k%2==0){
          digitalWrite(kran,HIGH);
          Serial . print ( "Water level: " );
          Serial . println (waterLevel, DEC );
          delay(1000);
        }else{
          if (waterLevel>=125){k=2;}
          digitalWrite(kran,LOW);
        }
      }while(waterLevel<125);
  }else{
    digitalWrite(kran,LOW);
  }
}
