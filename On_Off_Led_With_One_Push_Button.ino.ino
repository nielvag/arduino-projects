int buttonPin = 3;
int ledPin = 4;
bool buttonPressed = false;
bool ledOn = false;

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  buttonPressed = !digitalRead(buttonPin);
  
  while(!buttonPressed) {
    delay(20); //debounce
    buttonPressed = !digitalRead(buttonPin);
  }
  
  while(buttonPressed) {
    delay(20); //debounce
    buttonPressed = !digitalRead(buttonPin);
  }
  
  ledOn = !ledOn;
  digitalWrite(ledPin, ledOn);
}