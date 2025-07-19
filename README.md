
# Arduino Temperature Monitor with LCD

This is a beginner-friendly embedded systems project using an **Arduino Uno**, **TMP36 analog temperature sensor**, and a **16x2 LCD** to display real-time temperature readings in Celsius.

---

## 🔧 Components Used
- Arduino Uno R3
- TMP36 Temperature Sensor
- 16x2 LCD (Standard Parallel Interface)
- 10kΩ Potentiometer (for LCD contrast)
- Breadboard + Jumper Wires
- USB Power/Simulation (via Tinkercad)

---

## 🛠️ Circuit Overview

**Sensor Connection (TMP36):**
- VCC → 5V
- GND → GND
- Vout → A0

**LCD Connections:**
- RS → Pin 12  
- E  → Pin 11  
- D4 → Pin 5  
- D5 → Pin 4  
- D6 → Pin 3  
- D7 → Pin 2  
- VSS → GND  
- VDD → 5V  
- V0 → Middle pin of Potentiometer  
- RW  → GND  
- A (Backlight +) → 5V  
- K (Backlight -) → GND

---

## 💡 How It Works

1. The TMP36 sensor outputs an analog voltage corresponding to ambient temperature.
2. Arduino reads this voltage via `analogRead(A0)`.
3. It converts the voltage to temperature in Celsius.
4. The result is displayed on a 16x2 LCD.
5. Temperature is also sent to the Serial Monitor for debugging.

---

## 🔄 Sample Output

**LCD Display:**
```
Temp: 24.85 C
```

**Serial Monitor:**
```
Temperature: 24.85 °C
```

---

## 🧪 Simulation Platform

This project was built and tested using **Tinkercad Circuits**.  
You can recreate it here: [https://www.tinkercad.com/](https://www.tinkercad.com/)

---

## 📁 Files Included
- `TMP36_LCD_Temperature_Monitor.ino` – Arduino source code
- `circuit_screenshot.png` – Breadboard and wiring image
- `README.md` – This file

---

## 🙌 Author

Project built by a student learning embedded systems using Arduino and Tinkercad.  
Feel free to fork, modify, and improve!

---

## ✅ Skills Demonstrated
- Analog sensor interfacing
- LCD control with LiquidCrystal library
- Temperature conversion math
- Serial debugging
- Embedded system prototyping in Tinkercad
