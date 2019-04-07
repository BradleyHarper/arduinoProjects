#include <Servo.h>   //load servo library
int pos=0;   //declare and initialize the pos variable
int potPin=A0;  // connect potentiometer to pin A0
int servoPin=9;  //tell arduino the server is hooked to pin 9
int servoDelay=25;
int potReading; // declare variable for potentiometer reading 

Servo directional; //create a servo object called directional

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 directional.attach(servoPin);
}


void loop() {
  // put your main code here, to run repeatedly:
  potReading = analogRead(potPin);  //read potentiometer
  pos = (155./1023.)*potReading + 15;  //calcualte pos
  directional.write(pos);  //write pos to servo
  Serial.println(pos);
}
