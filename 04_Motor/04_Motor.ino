// 04_Motor
// L298N/L293D 계열 모터 드라이버를 이용한 DC 모터 기본 제어 실습
// ENA: D5(PWM), IN1: D8, IN2: D7

const int ENA_PIN = 5;
const int IN1_PIN = 8;
const int IN2_PIN = 7;

void setup() {
  pinMode(ENA_PIN, OUTPUT);
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
}

void loop() {
  // 정회전
  digitalWrite(IN1_PIN, HIGH);
  digitalWrite(IN2_PIN, LOW);
  analogWrite(ENA_PIN, 180);
  delay(2000);

  // 정지
  analogWrite(ENA_PIN, 0);
  delay(1000);

  // 역회전
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, HIGH);
  analogWrite(ENA_PIN, 180);
  delay(2000);

  // 정지
  analogWrite(ENA_PIN, 0);
  delay(1000);
}
