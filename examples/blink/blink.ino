// Arduino Blink Example
// Built-in LED를 1초 간격으로 켜고 끄는 기본 예제입니다.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
