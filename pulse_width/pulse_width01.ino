#define LED_PIN 10
#define TIME_TO_WAIT 10
#define MAX_BRIGHTNESS 255
#define MIN_BRIGHTNESS 1

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    for (int brigthness = 0; brigthness < MAX_BRIGHTNESS; brigthness++)
    {
        analogWrite(LED_PIN, brigthness);
        delay(TIME_TO_WAIT);
    }

    for (int brigthness = 255; brigthness > MIN_BRIGHTNESS; brigthness--)
    {
        analogWrite(LED_PIN, brigthness);
        delay(TIME_TO_WAIT);
    }
}