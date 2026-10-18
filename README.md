# 💡 AVR LED Chaser Using a Register-Level GPIO Driver

<p align="center">
  <strong>Exploring Bare-Metal Firmware Development Through Direct Hardware Control</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-Embedded_C-blue?style=for-the-badge&logo=c" alt="Embedded C"/>
  <img src="https://img.shields.io/badge/Platform-AVR-orange?style=for-the-badge" alt="AVR"/>
  <img src="https://img.shields.io/badge/Focus-Register--Level_GPIO-green?style=for-the-badge" alt="Register-Level GPIO"/>
  <img src="https://img.shields.io/badge/Development-Bare--Metal-purple?style=for-the-badge" alt="Bare-Metal Development"/>
</p>

## 📌 Overview

This project implements an **LED chaser using an AVR microcontroller and a custom register-level GPIO driver written in Embedded C**.

Rather than placing GPIO operations directly inside the application logic, this project uses a reusable driver interface to configure pins and control digital outputs.

The project demonstrates fundamental embedded firmware concepts, including hardware register manipulation, bitwise operations, modular programming, and separation of application logic from low-level hardware control.

## 🎯 Project Objectives

- 🔹 Understand AVR GPIO registers and their functions.
- 🔹 Develop a reusable GPIO driver in Embedded C.
- 🔹 Configure GPIO pins as digital outputs.
- 🔹 Control multiple LEDs to generate a sequential chasing pattern.
- 🔹 Apply bitwise operations for low-level hardware control.
- 🔹 Build a modular firmware structure that can be extended for future embedded projects.

## 🎬 Project Demonstration

The LEDs turn ON and OFF sequentially, producing a continuous chasing-light effect.

📹 **Demo:** Add your LED chaser video or GIF here.

> 💡 *Tip: Upload a short GIF or video showing the LED sequence to make your GitHub repository more engaging.*

## 🛠️ Hardware & Software Requirements

### 🔌 Hardware

- AVR microcontroller (ATmega328P, if used in your implementation)
- LEDs
- Current-limiting resistors
- Breadboard and jumper wires, if using physical hardware

### 💻 Software & Tools

- **Programming Language:** Embedded C
- **Compiler:** AVR-GCC
- **Simulation:** Wokwi, if used
- **Version Control:** Git and GitHub

## ⚙️ Custom GPIO Driver

The GPIO driver provides a reusable interface between the application and the microcontroller's GPIO hardware.

### ✨ Driver Operations

| Operation | Description |
|---|---|
| `GPIO_PINMODE` | Configures a GPIO pin as input or output |
| `GPIO_WRITE` | Sets an individual output pin HIGH or LOW |
| `GPIO_WRITEPORT` | Writes an output value to a port |
| `GPIO_READ` | Reads the logic level of an input pin |

*The operation names above reflect the intended interface; adjust them to match the actual names and signatures in your source code.*

### 📚 Understanding AVR GPIO Registers

For the ATmega328P, GPIO control involves three key register types:

| Register | Function |
|---|---|
| `DDRx` | Configures each port pin as an input or output |
| `PORTx` | Sets output levels or enables internal pull-up resistors for input pins |
| `PINx` | Reads the input logic levels of the port pins |

Understanding these registers provides the foundation for developing firmware that interacts directly with microcontroller hardware.

## 🔄 Working Principle

1. **Initialization:** Initialize the GPIO pins connected to the LEDs.
2. **Configuration:** Set the required pins as outputs through the GPIO driver.
3. **Output Control:** Set the initial LED states.
4. **Sequential Switching:** Turn the LEDs ON and OFF in the desired order.
5. **Timing:** Introduce a delay between transitions so the chasing pattern is visible.
6. **Continuous Operation:** Repeat the sequence to create a continuous LED chaser.

## 🏗️ Firmware Architecture

The project separates the application logic from the GPIO driver.

### 🧠 Application Layer — `main.c`

- Defines the LED sequence.
- Determines the order of LED transitions.
- Controls the timing between transitions.
- Uses the GPIO driver interface to interact with the hardware.

### 🔧 Driver Layer — GPIO Driver

- Configures GPIO pins.
- Controls individual pins and port outputs.
- Reads pin states when required.
- Encapsulates low-level GPIO operations behind reusable interfaces.

**Why this design matters:** Separating the driver from the application makes the firmware more organized, reusable, and easier to maintain as the project grows.

## 🧩 Key Concepts Demonstrated

- 🔹 Bare-metal firmware development
- 🔹 Embedded C programming
- 🔹 Register-level GPIO configuration
- 🔹 Bitwise operations and bit manipulation
- 🔹 Digital output control
- 🔹 Modular firmware architecture
- 🔹 Hardware abstraction through reusable driver interfaces
- 🔹 Basic timing and sequential control

## 🚀 Future Enhancements

- ⏱️ Replace blocking software delays with hardware timer-based timing.
- 🔘 Add push-button control for changing LED patterns.
- ⚡ Introduce external interrupts for event-driven control.
- 🔄 Extend the driver with additional GPIO features.
- 🧠 Port register-level programming concepts to STM32.
- 🧪 Add build instructions, simulation evidence, and hardware test results.

## 📁 Repository Structure

The following is a suggested structure. Update it to reflect your actual repository.

```text
AVR-LED-Chaser/
├── Led chaser/
│   ├── gpio.h
│   └── gpio.cpp
│   └── sketch.ino
├── README.md
```

## 👨‍💻 Author

**Gangai Gowsic P**

🎓 Electronics and Communication Engineering Student  
🎯 Aspiring Firmware & Embedded Systems Engineer

**Technical Interests**

`Embedded C` · `Bare-Metal Firmware` · `Register-Level Programming` · `MCU Drivers` · `AVR` · `STM32`

---

<p align="center">
  <strong>⚡ Learning embedded systems from the hardware-register level upward.</strong>
</p>

<p align="center">
  ⭐ If you find this project interesting, consider starring the repository!
</p>
