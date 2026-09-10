// 02_Ultrasonic
// HC-SR04 초음파 센서 거리 측정 실습
// TRIG: D7, ECHO: D6

#define TRIG_PIN 7
#define ECHO_PIN 6

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(115200);
}

void loop() {
  long duration = measureEchoTime();
  float distanceCm = duration * 0.0343 / 2.0;

  Serial.print("Distance(cm) = ");
  Serial.println(distanceCm);

  delay(500);
}

long measureEchoTime() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  return pulseIn(ECHO_PIN, HIGH, 30000);
}
