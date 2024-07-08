### Arduino Interrupts

**Overview:**
Arduino interrupts are mechanisms that allow certain functions or routines to interrupt the main execution of code in response to an event. This capability is crucial for handling time-sensitive tasks, such as reading sensor data or responding to external signals without delay.

**Types of Interrupts:**
1. **External Interrupts:**
   - Triggered by external events such as changes on pins (rising or falling edges) or specific states.
   - Arduino boards typically support multiple external interrupt pins (e.g., `2`, `3` on Arduino Uno).

2. **Pin Change Interrupts:**
   - Triggered when any change occurs on the pins specified for pin change interrupts.
   - Available on pins where external interrupts are not supported or for more granular event detection.

**Interrupt Service Routine (ISR):**
- An ISR is a function that executes in response to an interrupt.
- ISR execution temporarily suspends the main program flow to handle the interrupt and resumes afterward.
- ISRs should be short, non-blocking, and avoid delays or extensive processing to prevent interrupt conflicts or timing issues.

**Arduino Interrupt Functions:**
- **`attachInterrupt()` Function:**
  - Attaches an ISR to a specific interrupt pin.
  - Syntax: `attachInterrupt(digitalPinToInterrupt(pin), ISR, mode);`
    - `pin`: Arduino pin number.
    - `ISR`: Interrupt Service Routine function.
    - `mode`: Defines the trigger condition (`LOW`, `CHANGE`, `RISING`, `FALLING`).

- **`detachInterrupt()` Function:**
  - Detaches the ISR from the interrupt pin, disabling further interrupts from that pin.
  - Syntax: `detachInterrupt(digitalPinToInterrupt(pin));`
    - `pin`: Arduino pin number.

**Best Practices:**
- **Keep ISRs Short:** Minimize processing within ISRs to maintain responsiveness and avoid blocking other interrupts.
- **Avoid Delays:** Delay functions (`delay()`, `millis()`, `micros()`) should not be used within ISRs to prevent interrupt latency issues.
- **Variable Sharing:** Use `volatile` keyword for variables shared between main code and ISRs to ensure correct data access.
