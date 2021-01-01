# Arduino-Uno-LS0964A
Basic Arduino non-addressable RGB LED Strips configuration making use of TIP120 NPN Darlington resistor

NOTE: Arduino has it's own power suply (different to the LED Strip) and the TIP120 is used to feed in the 12V (2.0A) current into the LED Strip

![Wiring Diagram](https://github.com/shark711/Arduino-Uno-LS0964A/blob/main/images/LS0964A.png?raw=true)

The plug on my LS0964A is aranged as

- +12V
- Blue 
- Red
- Green

![Circuit Diagram](https://github.com/shark711/Arduino-Uno-LS0964A/blob/main/images/CircuitDiagram.png?raw=true)

Basic Test Sequence to ensure you've connected it correctly: [LS0964A.ino](https://github.com/shark711/Arduino-Uno-LS0964A/blob/main/LS0964A/LS0964A.ino)

# Bill of Materials

| Name                   | Quantity | Component               |
| ---------------------- | -------- | ----------------------- |
| U1                     | 1        | Arduino Uno R3          |
| R1, R2, R3, R4, R5, R6 | 6        | 1 kΩ Resistor           |
| P1                     | 1        | 12V , 2.0A Power Supply |
| D1                     | 1        | Red LED                 |
| D2                     | 1        | Green LED               |
| D3                     | 1        | Bue LED                 |
| Q1, Q2, Q3             | 3        | TIP120                  |
