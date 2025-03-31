const int irSensorPin = 7;  

void setup() {
  Serial.begin(115200);  // Start serial communication
  pinMode(irSensorPin, INPUT); 
}

void loop() {
  int sensorValue = digitalRead(irSensorPin);  // Read the sensor state
  Serial.println(sensorValue); 
  delay(100);  
}
