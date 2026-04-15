const int sensorPin1 = A0;
const int sensorPin2 = A1;
const int sensorPin3 = A2;  // thêm A2

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value1 = analogRead(sensorPin1);
  int value2 = analogRead(sensorPin2);
  int value3 = analogRead(sensorPin3); // đọc A2

  float temp1 = (value1 * 500.0) / 1023.0;
  float temp2 = (value2 * 500.0) / 1023.0;
  float temp3 = (value3 * 500.0) / 1023.0;

  // xuất CSV: 3 giá trị
  Serial.print(temp1);
  Serial.print(",");
  Serial.print(temp2);
  Serial.print(",");
  Serial.println(temp3);

  delay(1000);
}