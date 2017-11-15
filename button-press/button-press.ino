
// const to set the pins, since they are fixed
const int buttonPin = 2;
const int motorPin = 14;

// variables will change:
int buttonState = 0;

void setup() {
  Serial.begin(115200);
  
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    Serial.println( "Button is pressed" );
    int buttonPressed = 1;
    delay(1000);
    digitalWrite(motorPin,HIGH);
    
  } else {
    Serial.println( "Not pressed" );
    digitalWrite(motorPin,LOW);
  }
  delay(50);
} 
