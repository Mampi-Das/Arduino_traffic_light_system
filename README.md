# 🚦 Arduino Traffic Light Controller

## 📌 Overview

This project implements a basic traffic light control system using an Arduino microcontroller. The system simulates real-world traffic signal behavior by controlling three LEDs (Red, Yellow, Green) with defined timing sequences and transition logic.

The objective of this project is to demonstrate fundamental concepts of embedded systems, digital output control, and timing-based state transitions.

---

## ⚙️ Components

* Arduino Uno (or compatible board)
* Red, Yellow, and Green LEDs
* 220Ω Resistors (one per LED)
* Breadboard
* Jumper wires

---

## 🔌 System Design

Each LED represents a traffic signal and is controlled through a dedicated digital output pin of the Arduino. The LEDs are connected using current-limiting resistors to ensure safe operation.

* Red LED → Digital Pin 8
* Yellow LED → Digital Pin 10
* Green LED → Digital Pin 12

All LEDs share a common ground.

---

## 🔄 Working Principle

The system operates in a continuous loop, executing a predefined sequence of states:

1. **Red Signal (Stop Phase)**
   The red LED is activated to indicate that vehicles must stop.

2. **Yellow Signal (Transition Phase)**
   The yellow LED is activated briefly to indicate an upcoming change in signal.

3. **Green Signal (Go Phase)**
   The green LED is activated to allow vehicle movement.

4. **Green Blinking Phase (Warning Phase)**
   The green LED blinks multiple times to warn that the signal is about to transition back to red.

This sequence repeats indefinitely, simulating a standard traffic light cycle.

---

## ⏱️ Timing Configuration

* Red: 3 seconds
* Yellow: 1 second
* Green: 3 seconds
* Green Blink: 0.5 second interval (3 cycles)

These values are configurable and can be modified based on system requirements.

---

## 💻 Implementation Details

The system is implemented using the Arduino programming environment. Digital pins are configured as outputs, and LED states are controlled using `digitalWrite()`.

Timing control is achieved using the `delay()` function, while repetitive blinking behavior is implemented using a loop structure.

---

## 🎯 Key Concepts Demonstrated

* Digital output interfacing
* Timing and delay control
* Sequential logic implementation
* Embedded system basics
* Hardware-software interaction

---

## 🚀 Future Improvements

* Sensor-based dynamic traffic control
* Pedestrian crossing integration
* Multi-direction (4-way) traffic system
* Interrupt-based timing instead of delay
* Integration with IoT for smart monitoring

---

## 📚 Note

This project is developed as part of learning and exploring embedded systems using Arduino. It represents a simplified model of a real-world traffic control system.

---

## 👩‍💻 Author

Mampi Das
