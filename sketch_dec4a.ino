const int pirPin = 2;           // Pin connected to the PIR sensor
const int ledPin = 3;           // Pin connected to the first LED
const int ledPinn = 5;          // Pin connected to the second LED
const int buzzerPin = 4;        // Pin connected to the buzzer

unsigned long motionTime = 0;   // Time when motion was last detected
unsigned long blinkInterval = 500; // Blinking interval for the LED (in milliseconds)
const int debounceDelay = 2000; // Minimum time between valid detections (2 seconds)

bool ledState = false;          // State of the blinking LED
int lastState = LOW;            // Variable to track the previous PIR sensor state

void setup() {
  pinMode(pirPin, INPUT);       // PIR sensor as input
  pinMode(ledPin, OUTPUT);      // First LED as output
  pinMode(ledPinn, OUTPUT);     // Second LED as output
  pinMode(buzzerPin, OUTPUT);   // Buzzer as output
  Serial.begin(9600);           
}


void loop() {
  int sensorState = digitalRead(pirPin); 
  unsigned long currentTime = millis();  

  if (sensorState == HIGH && lastState == LOW) {
    
    motionTime = currentTime;            
    digitalWrite(buzzerPin, HIGH);       
    digitalWrite(ledPinn, LOW);          

    // Blink the first LED
    if (currentTime % blinkInterval < blinkInterval / 2) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }

    Serial.println('1');                 
    lastState = HIGH;                    
  } else if (sensorState == LOW && lastState == HIGH) {
    // No motion detected for the first time
    if (currentTime - motionTime > debounceDelay) {
      digitalWrite(ledPinn, HIGH);       
      digitalWrite(ledPin, LOW);         
      digitalWrite(buzzerPin, LOW);      
      Serial.println('0');               
      lastState = LOW;                   
    }
  }
}