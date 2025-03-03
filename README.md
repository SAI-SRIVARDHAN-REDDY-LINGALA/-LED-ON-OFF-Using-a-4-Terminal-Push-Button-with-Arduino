# LED ON/OFF Using a 4-Terminal Push Button with Arduino

## 📌 Project Overview

This project demonstrates how to use a **4-terminal push button** to turn an LED **ON** and **OFF** using an **Arduino**. A **pull-down resistor** is used to ensure stable input readings.

---

## 🛠 Components Required

- **Arduino** (Uno, Mega, or Nano)
- **LED** (Any color)
- **4-terminal push button**
- **Resistor (10kΩ)** – Pull-down resistor
- **Resistor (220Ω - 1kΩ)** – LED current limiting
- **Jumper Wires**
- **Breadboard** (Optional)

---

## 🔌 Circuit Connections

| Component                 | Connect To                   |
| ------------------------- | ---------------------------- |
| **LED (+ Anode)**         | **Arduino Digital Pin 7**    |
| **LED (- Cathode)**       | **One end of 220Ω resistor** |
| **Other end of Resistor** | **GND**                      |
| **Push Button Pin 1**     | **5V (Arduino)**             |
| **Push Button Pin 2**     | **Arduino Digital Pin 2**    |
| **Push Button Pin 3**     | **GND**                      |
| **Push Button Pin 4**     | **10kΩ Resistor to GND**     |

### How It Works:
1. The **LED** is connected to **pin 7** with a **220Ω resistor**.
2. The **push button** is connected to **5V and pin 2**.
3. A **10kΩ pull-down resistor** ensures a stable LOW state when the button is not pressed.
4. Pressing the button **sends 5V to pin 2**, making it read **HIGH**, which turns **ON** the LED.

---

## 👨‍💻 Arduino Code

```cpp
int button_pin = 2;
int button_state = 0;
int led_pin = 7;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT);
}

void loop() {
  button_state = digitalRead(button_pin);
  if (button_state == HIGH) {
    digitalWrite(led_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);
  }
}
```

---

## 📝 Explanation of Code

1. **Variable Declarations**:
   - `led_pin = 7`: LED connected to pin 7.
   - `button_pin = 2`: Button connected to pin 2.
   - `button_state`: Stores button status.
2. **Setup Function**:
   - Set `led_pin` as `OUTPUT`.
   - Set `button_pin` as `INPUT`.
3. **Loop Function**:
   - **Read button state**.
   - If button is **pressed (HIGH)** → Turn **ON** LED.
   - If button is **not pressed (LOW)** → Turn **OFF** LED.

---

## 🤓 Important Concepts

### 🔵 Why Use a Resistor with the LED?
- Prevents excessive current flow that could damage the LED.

### 🟡 Why Use a Pull-Down Resistor (10kΩ)?
- Ensures **pin 2** reads LOW when the button is not pressed.
- Prevents floating values.

### 🟠 How the Button Works:
- **Pressed** → Pin 2 receives **5V**, reads **HIGH**, LED turns **ON**.
- **Released** → Pull-down resistor pulls **pin 2 to 0V**, reads **LOW**, LED turns **OFF**.

---

## 🛠 Troubleshooting Tips

### LED Not Turning ON?
- Check LED polarity (Anode to **pin 7**, Cathode to **GND**).
- Ensure the **220Ω resistor** is in place.

### Button Not Responding?
- Check push button wiring (**Pin 1 to 5V, Pin 2 to Arduino**).
- Verify **10kΩ pull-down resistor** is correctly connected.

### LED Always ON or OFF?
- Ensure correct push button connections.
- Check **pull-down resistor** connection.

---

## 🚀 Applications

- Simple ON/OFF control for appliances.
- Basic user input for Arduino projects.
- DIY smart home lighting system.
- Interactive button-controlled projects.

---

## 📜 License

This project is open-source and can be used for educational and personal purposes.

---



Happy Coding! 🎉

