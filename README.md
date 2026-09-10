# Arduino 수업용 실습 저장소

Arduino 기초 수업과 센서·액추에이터 실습을 단계적으로 진행할 수 있도록 구성한 저장소입니다.

## 실습 구성

| 순서 | 폴더 | 주제 | 핵심 학습 내용 |
|---|---|---|---|
| 01 | `01_Blink` | LED 점멸 | `pinMode`, `digitalWrite`, `delay` |
| 02 | `02_Ultrasonic` | 초음파 거리 측정 | 디지털 입출력, `pulseIn`, 거리 계산 |
| 03 | `03_Servo` | 서보모터 제어 | Servo 라이브러리, 각도 제어 |
| 04 | `04_Motor` | DC 모터 제어 | 모터 드라이버, 정·역회전, PWM 속도 제어 |
| 05 | `05_Sensor` | 아날로그 센서 | `analogRead`, ADC 값, 전압 변환 |

## 권장 보드

- Arduino Uno
- Arduino Nano 등 5 V 계열 기본 보드

## 실습 01: Blink

파일: `01_Blink/01_Blink.ino`

Arduino 보드의 내장 LED를 1초 간격으로 켜고 끄며 가장 기본적인 디지털 출력 구조를 익힙니다.

## 실습 02: Ultrasonic

파일: `02_Ultrasonic/02_Ultrasonic.ino`

HC-SR04 기준 연결 예시:

- TRIG → D7
- ECHO → D6
- VCC → 5V
- GND → GND

초음파 왕복 시간을 측정해 거리를 cm 단위로 계산합니다.

## 실습 03: Servo

파일: `03_Servo/03_Servo.ino`

연결 예시:

- Signal → D9
- VCC → 5V 또는 별도 전원
- GND → GND

서보모터를 0°, 90°, 180° 위치로 순차 제어합니다.

## 실습 04: Motor

파일: `04_Motor/04_Motor.ino`

L298N/L293D 계열 모터 드라이버 기준 예시:

- ENA → D5 (PWM)
- IN1 → D8
- IN2 → D7

DC 모터의 정회전, 정지, 역회전과 PWM 속도 제어를 실습합니다. 모터는 Arduino 5V 핀에 직접 연결하지 말고 반드시 모터 드라이버를 사용합니다.

## 실습 05: Sensor

파일: `05_Sensor/05_Sensor.ino`

가변저항, 조도센서 등 아날로그 센서 출력선을 A0에 연결해 ADC 값을 읽고 전압으로 변환합니다.

## 수업 진행 권장 순서

1. 디지털 출력과 프로그램 구조 이해
2. 디지털 입력과 시간 측정
3. 액추에이터 위치 제어
4. 모터 구동과 PWM 제어
5. 아날로그 센서 데이터 취득
6. 이후 센서와 모터를 결합한 미니 프로젝트 진행

## Arduino IDE 사용 방법

1. 원하는 실습 폴더의 `.ino` 파일을 엽니다.
2. **Tools > Board**에서 사용하는 보드를 선택합니다.
3. **Tools > Port**에서 연결된 포트를 선택합니다.
4. Verify로 컴파일을 확인합니다.
5. Upload를 눌러 Arduino에 전송합니다.
6. 센서 실습은 Serial Monitor를 115200 baud로 설정합니다.

## 다음 확장 실습 제안

- `06_PushButton` : 버튼 입력과 디바운싱
- `07_Buzzer` : 부저와 주파수 출력
- `08_LCD` : LCD/OLED 표시
- `09_Temperature` : 온습도 센서
- `10_Ultrasonic_Servo` : 초음파 센서 + 서보모터 통합
- `11_Robot_Car` : 초음파 센서 + DC 모터 기반 이동로봇

이 저장소는 수업 진행에 따라 단계적으로 예제를 추가하고 개선하는 용도로 사용합니다.
