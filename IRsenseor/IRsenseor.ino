
// OBSTACLE DETECTED OR NOT USING AN IR SENSOR




void setup() {
 Serial.begin(9600);
 pinMode(A0,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int ir = analogRead(A0);

  if (ir < 600){
    Serial.println("Obstacle detected");
  }

  else {
    Serial.println("No obstacle");

  }
  Serial.println(ir);

  delay(3000);

}
