const int redLED = 8;     // Red LED is connected to digital pin 8
const int blueLED = 7;   // Blue LED is connected to digital pin 7
const int buzzerPin = 6; // Piezo buzzer is connected to digital pin 6

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, LOW);
  tone(buzzerPin, 500, 9000);
  
  delay(1000);
  
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, HIGH);
  tone(buzzerPin, 700, 9000);
  
  delay(1000);
}


