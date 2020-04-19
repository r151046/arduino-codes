int pid;
int digitalPin = 3;
void setup() {
  pinMode(digitalPin, OUTPUT);
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
}
void loop() {
  if (Serial.available() > 0) { // only send data back if data has been sent
    Serial.println("serial");
    pid = Serial.read();
    if (pid > 4) {
      //int pid = a.toInt();
      Serial.println(pid);
      if (pid == 9) {
        analogWrite(digitalPin, 65);
        delay(100);
        analogWrite(digitalPin, 0);
      }
      if (pid == 10) {
        analogWrite(digitalPin, 65);
        delay(100);
        analogWrite(digitalPin, 75);
      }
    }
  }
}
