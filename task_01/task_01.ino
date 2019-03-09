int switchState1 = 0;
int switchState2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

void loop() {
  switchState1 = digitalRead(7);
  switchState2 = digitalRead(8);
  
  // put your main code here, to run repeatedly:
  if(switchState1 == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
  }
  else {
    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(5, LOW);
    delay(250);
  }
  
  if(switchState2 == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(250);
    digitalWrite(4, LOW);
    delay(250);
  }
}
