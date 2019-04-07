int red = 11;
int yellow = 12;
int green = 13;
int brightness = HIGH;
int lowness = LOW;
int onOffDelay = 100;
int offTime = 100;
int onOffDelayb = 10;
int offTimeb = 10;
int buttonPin = 9;
int buzzer = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(buttonPin,INPUT);
pinMode(buzzer,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(buttonPin) == LOW){
  digitalWrite(red,brightness);
  delay(onOffDelayb);
  digitalWrite(red,lowness);
  delay(offTimeb);

  digitalWrite(yellow,brightness);
  delay(onOffDelayb);
  digitalWrite(yellow,lowness);
  delay(offTimeb);

  digitalWrite(green,brightness);
  delay(onOffDelayb);
  digitalWrite(green,lowness);
  delay(offTimeb);
  }else{
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
    }

}
