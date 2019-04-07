
int red = 11;
int yellow = 12;
int green = 13;
int brightness = HIGH;
int lowness = LOW;
int onOffDelay = 100;
int offTime = 100;
int buttonPin = 9;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(buttonPin) == HIGH)
{
  digitalWrite(red,brightness);
  delay(onOffDelay);
  digitalWrite(red,lowness);
  delay(offTime);

  digitalWrite(yellow,brightness);
  delay(onOffDelay);
  digitalWrite(yellow,lowness);
  delay(offTime);

  digitalWrite(green,brightness);
  delay(onOffDelay);
  digitalWrite(green,lowness);
  delay(offTime);
}else{
  digitalWrite(red,HIGH);
  delay(offTime);
  digitalWrite(red,LOW);
  }
}
