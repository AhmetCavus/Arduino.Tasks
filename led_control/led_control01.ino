#define LED_PIN 7
#define DELAY 1000

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(DELAY);
    digitalWrite(LED_PIN, LOW);
    delay(DELAY);
}