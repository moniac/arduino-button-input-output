# arduino-button-input-output

The intent of this manual will be to help you setup a button to activate something after an x amount of seconds.

## Requirements

  1. Have the Arduino IDE installed
  2. Have a board
  3. A button
  4. Something to control, such as a led or motor

## Setup

  1. Connect the button to their pins, that's - to GND, + to 3V3 and in this case the S to D2
  2. Connect the second output to GND & another output, in this case D5
  
  # The Code
  
  ```
  // this is where we declare the pins
  // we use const because this doesn't change
  const int buttonPin = 2;
  const int motorPin = 14;
  
  // we use a variable here because this will change
  int buttonState = 0;
  
  void setup() {
  // this is to write all the data to the console
  Serial.begin(115200);
  
  // this is to set the button as an input and the motor as an output
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
  } 
  
  void loop() {
  // the variable will now be what comes through the button
    buttonState = digitalRead(buttonPin);

    if (buttonState == LOW) {
    // if the button is pressed, do this
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
    ```
