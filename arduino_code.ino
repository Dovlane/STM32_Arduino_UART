
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int incomingByte = Serial.read();

    if (incomingByte == '1') {
      digitalWrite(8, HIGH);
    } else {
      digitalWrite(8, LOW);
    }

    Serial.write(incomingByte);
  }
}