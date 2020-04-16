void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int timeToDelay = analogRead(2);
    Serial.println(timeToDelay);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(timeToDelay);
    digitalWrite(LED_BUILTIN, LOW);
    delay(timeToDelay);
}