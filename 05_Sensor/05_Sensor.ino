// 05_Sensor
// 가변저항/조도센서 등 아날로그 센서 값을 읽는 기본 실습
// Sensor output: A0

const int SENSOR_PIN = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  float voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("Sensor = ");
  Serial.print(sensorValue);
  Serial.print("  Voltage(V) = ");
  Serial.println(voltage, 2);

  delay(500);
}
