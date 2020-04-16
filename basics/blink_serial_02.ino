void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600); 
    Serial.println("Builtin led control");
    Serial.println("1 - For activate, 0 - For deactivate");
}

void loop()
{
    if(Serial.available()) {
        char input = Serial.read();
        if(input == '1') {
            digitalWrite(LED_BUILTIN, HIGH);
            Serial.println("Activate led");
        } else if(input == '0') {
            digitalWrite(LED_BUILTIN, LOW);
            Serial.println("Deactivate led");
        }
    }
}