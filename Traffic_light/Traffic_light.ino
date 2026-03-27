const int red = 8;
const int yellow = 10;
const int green = 12;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {

  // 🔴 RED ON (3 sec)
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(3000);

  // 🟡 YELLOW ON (1 sec)
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(1000);

  // 🟢 GREEN ON (3 sec)
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(3000);

  // 🟢 GREEN BLINK (0.5 sec × 3 times)
  for (int i = 0; i < 3; i++) {
    digitalWrite(green, LOW);
    delay(500);   // OFF

    digitalWrite(green, HIGH);
    delay(500);   // ON
  }

  // Turn OFF before restart (optional clean reset)
  digitalWrite(green, LOW);
}