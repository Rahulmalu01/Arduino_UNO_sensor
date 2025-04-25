#define TEMP_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(TEMP_PIN);
  float voltage = reading * 5.0 / 1023.0;
  float temperatureC = voltage * 100;  // LM35: 10mV per °C

  Serial.print("Temperature: ");
  Serial.print(temperatureC, 1);
  Serial.println(" °C");

  delay(1000);
}
