
long SECONDS_IN_HOUR = 60*60;
long TOTAL_STEPS = 2048;        // Total steps in step motor

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  // Hours Hand - Main Spiral
  long time_in_seconds = getCurrentTime();
  long step_sec = ((double)TOTAL_STEPS / (double)SECONDS_IN_HOUR) * time_in_seconds;
  long step = step_sec % TOTAL_STEPS;
  Serial.println(step);


  // 
}

long getCurrentTime() {
  return 3650;
}

