# SPI-Based Master-Slave LED Control with 10 ms Periodic Transmission

## Project Description
This simple project demonstrates communication between two microcontrollers (Master and Slave) using the SPI protocol. The master sends data every 10 milliseconds to the slave. If the transmitted data is `1`, the slave turns on the LED.

## Project Functionality
- The **Master Microcontroller** transmits the byte `1` every 10 ms over SPI.
- The **Slave Microcontroller** reads the transmitted byte:
  - If the received data is `1`, the LED connected to the slave turns on and remains on.

## Components Required
- Two **ATmega32** microcontrollers
- **LED** with a current-limiting resistor
- **SPI communication wires** (MOSI, MISO, SCK, and SS)
  
## Technical Details
- **Master:**
  - Configured in **SPI Master mode**.
  - Uses `_delay_ms(10)` to maintain a periodic transmission interval.
  
- **Slave:**
  - Configured in **SPI Slave mode** to continuously receive data from the master and control the LED.

## Expected Behavior
- The LED on the slave board **lights up** if the slave receives `1` from the master.
- The LED **remains in its state** (on) until the system is reset or a new signal is received.

## Conclusion
This project is a simple yet effective demonstration of synchronous communication using the **SPI protocol**, where the master controls the state of an LED on the slave microcontroller.

