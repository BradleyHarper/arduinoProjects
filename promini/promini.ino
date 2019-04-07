
int yellow = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(yellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(yellow,HIGH);
delay(500);
digitalWrite(yellow,LOW);
}
