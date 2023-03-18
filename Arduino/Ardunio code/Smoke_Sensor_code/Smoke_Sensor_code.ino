int LED = 13;
int smokeA0 = A0;                          
int threshold = 300;       // Your threshold value
int sensorvalue;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorvalue = analogRead(smokeA0);                // Checks if it has reached the threshold value
  if (sensorvalue > threshold)
  {
    digitalWrite(LED, HIGH);
    Serial.print("Somke Detected !!! \n");
  }
  else
  {
    digitalWrite(LED, LOW);
    Serial.print("Pin A0: ");
  Serial.print(sensorvalue);
  Serial.print("  No Smoke\n");   
  }
  delay(1000);
}
