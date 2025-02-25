int ledPin = 3;
int brightness = 0;
int fadeAmount = 4; 

void setup(){
    pinMode(ledPin,OUTPUT);

}

void loop(){
    analogWrite(ledPin,fadeAmount);
    brightness+=fadeAmount;
    if(brightness<=0 || brightness>= 255){
        fadeAmount*=-1
    }
    delay(50);
}
