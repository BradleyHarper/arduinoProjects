#include <Servo.h>   //load servo library

int pos=0;
int potPin=A0;
int servoPin=9;
int servoDelay=100;
int potReading; // declare variable for potentiometer reading
Servo directional; //create a servo object called directional

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 directional.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos=8 ; pos<=172 ; pos=pos+1){
    directional.write(pos);   //send servo to the specified position
    delay(servoDelay); //pause a moment
  }

  for (pos=172 ; pos>=8 ; pos=pos-1){
    directional.write(pos);   //send servo to the specified position
    delay(servoDelay); //pause a moment
  }

}
