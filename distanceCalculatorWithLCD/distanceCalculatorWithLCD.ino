#include <LiquidCrystal.h>  //load the liquidcrystal library
LiquidCrystal LCD(10,9,5,4,3,2);  //create the liquidcrystal object named LCD

int trigPin=13;  //connect sensor trig pin to arduino pin 13
int echoPin=11;  //connect sensor echo pin to arduino pin 11
float pingTime;  //declare our variable for measured ping time
float targetDistance; //distance to the target in inches
float speedOfSound = 776.5; // speed of sound in miles per hour

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //turn on serial monitor
  pinMode(trigPin,OUTPUT);  //set the trigger pin to be an output
  pinMode(echoPin,INPUT);  //set the echo pin to be an input

  LCD.begin(16,2); // turn on the LCD and tell the arduino how big it is
  LCD.setCursor(0,0);  // puts cursor in upper left corner of the display
  LCD.print("Target distance: "); //print first row
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin,LOW);  //set trigger pin low
  delayMicroseconds(2000); //pause briefly
  digitalWrite(trigPin,HIGH);  //set trigger pin high
  delayMicroseconds(20);  //pause briefly
  digitalWrite(trigPin,LOW);  //set trigger pin low
  delayMicroseconds(10); //even more of a brief delay

  pingTime = pulseIn(echoPin,HIGH);  // measure the ping time ***pingTime is displayed in microseconds, you need to convert this to mph***
  pingTime = pingTime/1000000.;  //converts microseconds to seconds
  pingTime = pingTime/3600.;  //converts seconds to hours 3600 seconds is in an hour
  targetDistance = speedOfSound*pingTime; // distance = rate * time. why multiply by 2? because the the pingTime is only recorded one way, not the whole trip around
  targetDistance = targetDistance/2.;
  targetDistance = targetDistance*63360.; //converts miles to inches. why was it in miles? because our initial equation used the speed of sound, which is in mph

  LCD.setCursor(0,1);  //set cursor to first column second row
  LCD.print("                ");
  LCD.setCursor(0,1); //put cursor back to first column second row
  LCD.print(targetDistance);  // print distance to target on LCD
  LCD.print(" inches"); //print units
  delay(250);  //pause so display is not too jittery or sluggish. refresh rate?

}
