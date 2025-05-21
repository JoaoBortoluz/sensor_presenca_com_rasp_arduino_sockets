int ledPin = 6; 
int sensorPin = 7; 
int sensor_reading = 0; 
bool sensor_state = false;

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT); 
  pinMode(sensorPin, INPUT); 
}

void loop() {
  sensor_reading = digitalRead(sensorPin); //Realiza a sensor_reading do sensor de presença
  if (sensor_reading == HIGH) { 
      digitalWrite(ledPin, HIGH); 
      if (sensor_state == false) { 
        Serial.println("1"); 
        sensor_state = true; 
      }
      delay(5000); 
  
    } else { 
      digitalWrite(ledPin, LOW); 
      if (sensor_state == true) { 
        Serial.println("0"); 
        sensor_state = false; 
      }
    }
    delay(1000);
}
