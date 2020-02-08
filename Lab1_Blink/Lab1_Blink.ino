/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.
*/
int interval = 250;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void timedBlink(int offTime) {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(offTime);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(offTime);                       // wait for a second
}

// the loop function runs over and over again forever
void loop() {
 timedBlink(interval);
 timedBlink(interval*2);
 timedBlink(interval*4);
}
