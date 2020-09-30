void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue1 = analogRead(A0); 
  int sensorValue2 = analogRead(A1);
  Serial.print("POT 1 Val is : "); 
  Serial.print(sensorValue1);
  Serial.print(" & POT 2 Val is : ");
  Serial.println(sensorValue1);
  delay(1);     
}
