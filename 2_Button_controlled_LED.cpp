const int buttonPin = 2
const int ledPin = 3

void setup(){
    pinMode( buttonPin, INPUT_PULLUP);
    pinMode( ledPin, OUTPUT);
}

void loop(){
    if (digitalRead(buttonPin)== LOW){
        digitalWrite(ledPin,HIGH); // Turn LED ON when button is pressed
    }else{
        digitalWrite(ledPin,LOW); // Turn LED OFF when button is released
    }
}