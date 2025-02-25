// Setup function runs once when the program starts
void setup() {
    // Initialize the built-in LED pin as an output
    pinMode(LED_BUILTIN, OUTPUT);
    
    // Set initial LED state to OFF
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  // Blink_led function toggles the LED on/off
  void blink_led(){
    // Turn LED ON
    digitalWrite(LED_BUILTIN, HIGH);
    // Wait for 1 second
    delay(1000);
    
    // Turn LED OFF
    digitalWrite(LED_BUILTIN, LOW);
    // Wait for another 1 second
    delay(1000);
  }
  
  // Loop function runs continuously
  void loop() {
    // Call blink_led function to toggle LED
    blink_led();
  }