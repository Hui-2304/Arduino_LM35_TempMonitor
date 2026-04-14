const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100.0;

  Serial.print("Nhiet do: ");
  Serial.print(temperature);
  Serial.println(" *C");

  delay(1000);
}