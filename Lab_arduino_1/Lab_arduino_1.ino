int blueLedPin = 2;
int greenLedPin = 3;
int redLedPin = 4;
int yellowLedPin = 5;
int orangeLedPin = 6;

int lightSensorPin = A0;
int analogValue = 0;

void setup()
{
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(orangeLedPin, OUTPUT);
}

void loop()
{
  analogValue = analogRead(lightSensorPin);
  if(analogValue > 200){
    digitalWrite(blueLedPin, HIGH);
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(orangeLedPin, HIGH); 
  
  }
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(redLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(orangeLedPin, LOW);
  
}
