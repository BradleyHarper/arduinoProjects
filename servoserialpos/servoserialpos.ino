#include <Servo.h>   //load servo library

int pos=0;
int potPin=A0;
int servoPin=9;
int servoDelay=100;
Servo directional; //create a servo object called directional

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 directional.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("set the position of the server, pleb: ");
  while (Serial.available()==0) {}

  pos=Serial.parseInt(); // takes the number the user gives and puts it in pos variable

  directional.write(pos);  // write pos to the servo

}
