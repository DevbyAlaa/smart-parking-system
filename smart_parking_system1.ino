void setup() {
  pinMode(2, INPUT_PULLUP); // DIP 1
  pinMode(3, INPUT_PULLUP); // DIP 2
  pinMode(4, INPUT_PULLUP); // DIP 3

  pinMode(13, OUTPUT); // Red
  pinMode(12, OUTPUT); // Yellow
  pinMode(11, OUTPUT); // Green
}

void loop() {
  int A = digitalRead(2) == LOW;
  int B = digitalRead(3) == LOW;
  int C = digitalRead(4) == LOW;

  int occupied = A + B + C;

  if (occupied == 0) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH); // Green
  }
  else if (occupied == 3) {
    digitalWrite(13, HIGH); // Red
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  else {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH); // Yellow
    digitalWrite(11, LOW);
  }
}