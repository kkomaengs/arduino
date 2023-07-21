int motorPinA = 2;
int motorPinB = 3;
int enablePin = 6;

void setup() {
  pinMode(motorPinA, OUTPUT);
  pinMode(motorPinB, OUTPUT);
  pinMode(enablePin, OUTPUT);
  analogWrite(enablePin,100);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(motorPinA, HIGH);   
  digitalWrite(motorPinB, LOW);   
  delay(1000);                     
}
