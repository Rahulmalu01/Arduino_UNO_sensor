#define PH_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(PH_PIN);
  float voltage = analogValue * (5.0 / 1023.0);
  float phValue = 7 + ((2.5 - voltage) * 3.5);  // Example formula

  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage, 2);
  Serial.print(" V | pH: ");
  Serial.println(phValue, 2);

  delay(1000);
}
