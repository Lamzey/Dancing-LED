// Pin numbers for the LEDs
int leds[] = {2, 3, 4, 5, 6, 7, 8}; // Connect LEDs to pins 2-8
int numLeds = 7; // Total number of LEDs

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Pattern 1: Sequential lighting
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }

  // Pattern 2: Backward sequential lighting
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }

  // Pattern 3: Alternate flashing
  for (int j = 0; j < 5; j++) { // Repeat 5 times
    for (int i = 0; i < numLeds; i += 2) {
      digitalWrite(leds[i], HIGH); // Light up even-index LEDs
    }
    delay(200);
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(leds[i], LOW); // Turn all LEDs off
    }
    delay(200);

    for (int i = 1; i < numLeds; i += 2) {
      digitalWrite(leds[i], HIGH); // Light up odd-index LEDs
    }
    delay(200);
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(leds[i], LOW); // Turn all LEDs off
    }
    delay(200);
  }

  // Pattern 4: All on, then all off
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
  }
  delay(500);
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(500);
}