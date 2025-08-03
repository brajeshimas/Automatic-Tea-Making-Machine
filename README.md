# 🍵 Automatic Tea Making Machine

A microcontroller-based automatic machine that can prepare and serve tea or coffee by following user commands via a 4x4 keypad.

---

## 🌟 Features

- 🔢 Accepts commands through a 4x4 keypad
- 📺 Displays system status on a 16x2 LCD
- ☕ Dispenses tea powder, sugar, milk, and water using servo and submersible motors
- 🔥 Uses an electric heating mug for brewing
- 🥤 Automatically picks empty cups and serves filled ones using a DC motor slider
- 👀 IR sensor checks cup availability
- ⚙️ Fully automatic from input to cup serving

---

## 📁 Folder Structure

```
Automatic-Tea-Making-Machine/
├── code/
│   ├── HardwareCode/     # Low-level drivers (motors, sensors)
│   ├── ArduinoProject/   # Arduino sketch files
│   └── UserCode/         # Application logic for tea/coffee making
├── images/               # Development and hardware images
└── README.md             # Project documentation
```

---

## 📸 Project Images

| Preparation Stage | Brewing Mechanism | Dispensing Cups | Ingredient Flow | Final Output |
|-------------------|-------------------|------------------|------------------|---------------|
| ![](images/img1.jpg) | ![](images/img2.jpg) | ![](images/img3.jpg) | ![](images/img4.jpg) | ![](images/img5.jpg) |


---

## 🔧 Technologies Used

- 🧠 Arduino UNO
- 🧾 Embedded C (Arduino IDE)
- 🔁 Servo Motor & DC Motor
- 📟 4x4 Keypad, 16x2 LCD
- 💧 Submersible Pump
- ⚡ Custom Electric Mug
- 👁️ IR Sensor

---

## ⚙️ How It Works

1. 📥 User selects drink type via keypad
2. 👁️ IR sensor detects if cups are available
3. 🎯 Servo motors dispense sugar, tea/coffee powder
4. 💧 Submersible pumps add milk and water
5. 🔥 The mix is heated inside a custom electric mug
6. 🥤 The ready drink is poured into a cup and moved outside using a slider

---

## 🚀 Future Improvements

- 🌡️ Add temperature sensor for real-time heating control
- 📱 Add WiFi/Bluetooth app control
- 🧪 Use flow sensors for more accurate measurements
- 🛢️ Auto-detection of empty ingredient tanks
- 🔊 Add buzzer or voice module for interaction

---

## 📜 Disclaimer

This project is for **educational and portfolio purposes only**.  
Please do not copy or redistribute the code or design without permission.
