int buzzer = 7;
int button = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == LOW) {
    digitalWrite(buzzer, HIGH);
    }

}
