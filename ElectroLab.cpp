// ElectroLab.ino
#define SENSOR_PIN 34
#define LED_PIN 2

void setup() {
  Serial.begin(115200);

  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("ElectroLab Started");
}

void loop() {
  int voltageLevel = analogRead(SENSOR_PIN);

  Serial.print("Analog Reading: ");
  Serial.println(voltageLevel);

  if (voltageLevel > 2000) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Level: HIGH");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("Level: LOW");
  }

  delay(1000);
}
