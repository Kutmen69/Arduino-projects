// Define pin for potentiometer
const int potPin = A0; // Analog pin

// Define LED pin
const int ledPin = 11;

void setup() {
    pinMode(potPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // Read potentiometer value
    int potValue = analogRead(potPin);

    // Map the value from 0-1023 to 0-255 for LED brightness
    int ledBrightness = map(potValue, 0, 1023, 0, 255);

    // Set LED brightness based on potentiometer value
    analogWrite(ledPin, ledBrightness);
    delay(10);
}