#define LOOP_COUNT 10
#define DELAY 300

void setup_()
{
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600); 
}

void loop_()
{
    for (int i = 0; i < LOOP_COUNT; i++)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        Serial.println("Blink");
        delay(DELAY);
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("Blink off");
        delay(DELAY);
    }
    delay(5000);
    Serial.println("End of loop");
}