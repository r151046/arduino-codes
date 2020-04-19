
const int stepPin = 5;
const int dirPin = 2;
const int enPin = 8;
int pid = 0;
int a;
int i = 0;
void setup() {

  // Sets the two pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
}
void loop() {
 right();
 left();
}
void right() {

  Serial.println("right stepper");
  digitalWrite(dirPin, HIGH); // Enables the motor to move in a particular direction
  for (int c = 0; c < 2; c++)
  {
    for (int x = 0; x < 2000; x++) {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(20);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(20);
    }
  }}

void left() {
  Serial.println("left stepper");
  digitalWrite(dirPin, LOW); // Enables the motor to move in a particular direction
  for (int c = 0; c < 2; c++)
  {
    for (int x = 0; x < 2000; x++) {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(20);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(20);
    }
  }}
  
