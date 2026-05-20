#include <gesture_control_system_inferencing.h>

// ===== Gesture labels =====
// 0 = fist
// 1 = four
// 2 = no_hand
// 3 = one
// 4 = palm
// 5 = three
// 6 = two

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("Hand Gesture AI System Started");
}

void loop() {

  // ===== SIMULATED MODEL OUTPUT =====
  // Replace this later with real inference values

  float fist     = random(0, 100) / 100.0;
  float four     = random(0, 100) / 100.0;
  float no_hand  = random(0, 100) / 100.0;
  float one      = random(0, 100) / 100.0;
  float palm     = random(0, 100) / 100.0;
  float three    = random(0, 100) / 100.0;
  float two      = random(0, 100) / 100.0;

  // ===== FIND MAX =====
  float maxValue = fist;
  String gesture = "fist";

  if (four > maxValue) {
    maxValue = four;
    gesture = "four";
  }

  if (no_hand > maxValue) {
    maxValue = no_hand;
    gesture = "no_hand";
  }

  if (one > maxValue) {
    maxValue = one;
    gesture = "one";
  }

  if (palm > maxValue) {
    maxValue = palm;
    gesture = "palm";
  }

  if (three > maxValue) {
    maxValue = three;
    gesture = "three";
  }

  if (two > maxValue) {
    maxValue = two;
    gesture = "two";
  }

  // ===== PRINT RESULT =====
  Serial.println("---------------");

  Serial.print("Detected Gesture: ");
  Serial.println(gesture);

  Serial.print("Confidence: ");
  Serial.println(maxValue);

  // ===== ACTIONS =====

  if (gesture == "one" && maxValue > 0.75) {
    Serial.println("Relay 1 Toggle");
  }

  else if (gesture == "two" && maxValue > 0.75) {
    Serial.println("Relay 2 Toggle");
  }

  else if (gesture == "three" && maxValue > 0.75) {
    Serial.println("Relay 3 Toggle");
  }

  else if (gesture == "four" && maxValue > 0.75) {
    Serial.println("Relay 4 Toggle");
  }

  else if (gesture == "fist" && maxValue > 0.75) {
    Serial.println("All OFF");
  }

  else if (gesture == "palm" && maxValue > 0.75) {
    Serial.println("All ON");
  }

  else if (gesture == "no_hand") {
    Serial.println("No Hand Detected");
  }

  delay(1000);
}
