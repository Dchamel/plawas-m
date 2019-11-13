unsigned long timing;
#define WAIT 10UL   //in sec both
#define WORK 3      //in sec both

void setup() {
  for (byte i = 0; i < 6; i++) {
    pinMode(i, INPUT);
  }
  pinMode(1, OUTPUT);
  digitalWrite(1,1);
  delay(2000);
  digitalWrite(1,0);
}

void loop() {
  if (millis() - timing >= WAIT*1000+WORK*1000) {
    timing = millis();
    digitalWrite(1,1);
    delay(WORK*1000);
    digitalWrite(1,0);  
  } 
  
}