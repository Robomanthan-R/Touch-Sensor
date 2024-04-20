#define TOUCH_PIN 2 // Define the digital pin connected to the OUT pin of the touch sensor

void setup() {
  Serial.begin(9600); // Start serial communication for debugging
  pinMode(TOUCH_PIN, INPUT); // Set the touch pin as input
}

void loop() {
  int touchState = digitalRead(TOUCH_PIN); // Read the state of the touch sensor
  
  if (touchState == HIGH) {
    Serial.println("Touch detected!"); // Print message to serial monitor if touch is detected
    // Add your code to take action when the touch sensor is touched
  } else {
    Serial.println("No touch detected."); // Print message to serial monitor if no touch is detected
    // Add your code to take action when the touch sensor is not touched
  }
  
  delay(100); // Add a small delay to debounce the touch sensor
}
