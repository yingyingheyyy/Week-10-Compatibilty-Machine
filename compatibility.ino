//Week 10 Compatibility Machine
// Yingying He

int leftSensor = A0;
int rightSensor = A2;
int redLED = 10;
int greenLED = 8;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  
 //read the input on two photocells.
 int leftsensorValue = analogRead(A0);
 Serial.print("leftsensor:");
 Serial.print(leftsensorValue);
 
 int rightsensorValue = analogRead(A2);
  Serial.print(", rightsensor:");
  Serial.println (rightsensorValue);

// lights are turned on randomly depending on the relationship between the two photocell values.
 if (leftsensorValue < rightsensorValue){
  digitalWrite(10,HIGH);
  }

 if (leftsensorValue > rightsensorValue){
  digitalWrite(8,HIGH);
  }
  // delay in between digitalWrite so we can see the lights switching.
  delay(300); 
}

    
