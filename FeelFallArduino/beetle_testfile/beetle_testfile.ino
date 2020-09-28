unsigned long startTime;
unsigned long counter;

void setup() {
  Serial.begin(115200);  //initial the Serial
}

void loop() {
  if (Serial.available())  {
    Serial.write(Serial.read());//send what has been received
    Serial.println();   //print line feed character
  }

  if (millis()>startTime+1000) {
    counter++;
    startTime=millis(); // Reset timer
    Serial.println("hoi");
    Serial.println(counter);
  }
}
