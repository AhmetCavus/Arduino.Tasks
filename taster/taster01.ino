#define TASTER_PIN 3

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(TASTER_PIN, INPUT_PULLUP);
}

void loop() {
    digitalWrite(LED_BUILTIN, !digitalRead(TASTER_PIN));
}