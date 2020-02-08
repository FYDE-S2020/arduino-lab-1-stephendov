/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.
*/
int interval = 250;
int freq = 100;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}

void timedBlink(int offTime) {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(offTime);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(offTime);                       // wait for a second
}

// the loop function runs over and over again forever
void loop() {
  for (int i=0; i <=100; i++){
  dimmer(freq, i);
  }
  for (int j=100; j >=0; j= j-1){
  dimmer(freq, j);
  }
}
