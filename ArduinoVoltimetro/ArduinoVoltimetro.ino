const byte bat1 = A0;
float volt = 0, medV = 0, fimV = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  medV = 0;
  for(int x = 0; x < 10; x++){
    volt = (analogRead(bat1)*5.0)/1024.0;
    medV = medV + volt;
    delay(100);
  }
  
  fimV = medV / 10.0;
  Serial.println(fimV);
  
}
