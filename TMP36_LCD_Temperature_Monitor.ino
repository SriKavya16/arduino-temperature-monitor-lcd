
#include <LiquidCrystal.h>

float voltage, temperature;
const int sensorPin = A0;  // TMP36 Vout connected to A0

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);              // Set up LCD size: 16x2
  Serial.begin(9600);            // Still print to serial for debug
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  voltage = sensorValue * (5.0 / 1024.0);
  temperature = (voltage - 0.5) * 100.0;

  // Print to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);           // column, row
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");

  delay(1000);
}
