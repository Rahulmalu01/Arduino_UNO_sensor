#define IR_SENSOR_PIN 7

void setup() {
  Serial.begin(9600);
  pinMode(IR_SENSOR_PIN, INPUT);
}

void loop() {
  int state = digitalRead(IR_SENSOR_PIN);
  if (state == LOW) {
    Serial.println("Obstacle Detected");
  } else {
    Serial.println("No Obstacle");
  }
  delay(500);
}
