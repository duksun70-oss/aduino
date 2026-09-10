#define TP 7
#define EP 6

void setup() {
  pinMode(TP, OUTPUT);
  pinMode(EP, INPUT);
  Serial.begin(115200);
}

void loop() {
  long microseconds = TP_init();
  long distance_cm = Distance(microseconds);

  Serial.print("Distance(cm)= ");
  Serial.println(distance_cm);

  delay(500);
}

long Distance(long time) {
  long distance;
  distance = time / 29 / 2;
  return distance;
}

long TP_init() {
  digitalWrite(TP, LOW);
  delayMicroseconds(2);
  digitalWrite(TP, HIGH);
  delayMicroseconds(10);
  digitalWrite(TP, LOW);

  long microseconds = pulseIn(EP, HIGH, 30000);
  return microseconds;
}
