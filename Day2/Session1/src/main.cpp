// Development Plan:  Check off each step with an 'x' as you complete each one:
// [x] Showed up to the workshop.
// [x] This file is open in VSCode.
// [x] View the simulated Arduino by opening the diagram.json file (shows up when PlatformIO and WokWi Simulator extensions are installed).
// [x] The Red LED is turned on.
// [x] The Green LED is also turned on.
// [ ] The Blue LED is also turned on.
// [ ] 300 milliseconds after all the LEDs turn on, the Blue LED turns off.
// [ ] The Red LED then turns on and off every second, forever.
// [ ] The Green LED simultaneously turns on and off every half-second, forever.
// [ ] The Blue LED is on whenever the Green LED is off, and vice-versa.



#include <Arduino.h>

void setup() {
    // red
    pinMode(3, OUTPUT);
    digitalWrite(3, HIGH);

    // green
    pinMode(4, OUTPUT);
    digitalWrite(4, HIGH);

    // green
    // pinMode(4, OUTPUT);
    // digitalWrite(4, HIGH);

}

void loop() {

}
