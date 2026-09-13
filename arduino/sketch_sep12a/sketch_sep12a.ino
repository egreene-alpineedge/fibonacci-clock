
long SECONDS_IN_HOUR = 60L*60;
long TOTAL_MINUTE_HAND_STEPS = 2048L;        // Total steps in step motor

long SECONDS_IN_12_HOUR = 60L*60*12;       // 12 hours is one rotation
long TOTAL_HOUR_HAND_STEPS = 2048L;        // Total steps in step motor

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // Get current time
  long time_in_seconds = getCurrentTime();

  // Minute Hand - Short Hand
  long hour_step = (TOTAL_MINUTE_HAND_STEPS * (time_in_seconds % SECONDS_IN_HOUR)) / SECONDS_IN_HOUR;
  // Serial.println(hour_step);

  // Hour Hand - Spiral Hand
  long twelve_hour_step = (TOTAL_HOUR_HAND_STEPS * (time_in_seconds % SECONDS_IN_12_HOUR)) / SECONDS_IN_12_HOUR;
  Serial.println(twelve_hour_step);

}

long getCurrentTime() {
  return 3600;
}

