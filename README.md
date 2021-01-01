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

| Name                   | Quantity | Component                     |
| ---------------------- | -------- | ----------------------------- |
| U1                     | 1        | [Arduino Uno R3][U1]          |
| R1, R2, R3, R4, R5, R6 | 6        | [1 kΩ Resistor][R1]           |
| P1                     | 1        | [12V , 2.0A Power Supply][P1] |
| D1                     | 1        | [Red LED][D1]                 |
| D2                     | 1        | [Green LED][D2]               |
| D3                     | 1        | [Bue LED][D3]                 |
| Q1, Q2, Q3             | 3        | [TIP120][Q1]                  |

[U1]: https://www.amazon.com/s?k=Arduino+Uno+R3&rh=n%3A541966&dc&qid=1609465795&rnid=2941120011&ref=sr_nr_n_1 "Amazon"
[R1]: https://www.amazon.com/s?k=1+k%E2%84%A6+Resistor&rh=n%3A306805011&dc&qid=1609465849&rnid=2941120011&ref=sr_nr_n_1 "Amazon"
[P1]: https://www.amazon.com/s?k=Regulated+12V+Transformer+power+supply&rh=n%3A5486425011&ref=nb_sb_noss "Amazon"
[D1]: https://www.amazon.com/s?k=Red+Light+Emitting+Diode&rh=n%3A228013&dc&qid=1609466136&rnid=2941120011&ref=sr_nr_n_3 "Amazon"
[D2]: https://www.amazon.com/s?k=Green+Light+Emitting+Diode&rh=n%3A228013&dc&qid=1609466136&rnid=2941120011&ref=sr_nr_n_3 "Amazon"
[D3]: https://www.amazon.com/s?k=Blue+Light+Emitting+Diode&rh=n%3A228013&dc&qid=1609466136&rnid=2941120011&ref=sr_nr_n_3 "Amazon"
[Q1]: https://www.amazon.com/s?k=tip120&rh=n%3A306910011%2Cn%3A306913011&dc&qid=1609465248&rnid=2941120011&ref=sr_nr_n_2 "Amazon"
