#include <Brain.h>
#include <Servo.h>

// Set up the brain parser, pass it the hardware serial object you want to listen on.
Brain brain(Serial);
Servo servo;
const int threshold = 75;

void setup() {
  // Start the hardware serial.
  Serial.begin(9600);

  // Attach the servo to pin 9.
  servo.attach(9);

  // Initialize the servo position to the center for the arm (90 degrees).
  servo.write(90);
}

void loop() {
  // Expect packets about once per second (might have to be changed for different arduino models/PCs).
  if (brain.update()) {
    // Read the attention value.
    int attention = brain.readAttention();

    // Print the attention value to the serial monitor.
    Serial.println(attention);

    // Check if the attention value is within the threshold range.
    if (attention >= threshold && attention <= 100) {
      // Map the attention value to the servo angle range (0-180).
      int servoAngle = map(attention, threshold, 100, 50, -45);

      // Set the servo position.
      servo.write(servoAngle);
    } else {
      // Set the servo to the center position (90 degrees) if the attention value is below the threshold.
      servo.write(90);
    }
  }
}
