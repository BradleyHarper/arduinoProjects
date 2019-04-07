#include<Servo.h>  //load the servo library

int trigPin = 13; //sensor trigger pin is connected to arduino pin13
int echoPin = 11;  //sensor echo pin is connected to arduino pin11
int servoControlPin = 9;  //servo control pin connected to arduino pin6

float pingTime; //time for ping to travel to target and return
float targetDistance; //distance from sensor to target
float speedOfSound = 761.7;  //Speed of sound in miles per hour (temp is 60 degrees F)
float servoAngle;  //variable for the angle of the servo

Servo servo; //create a servo object called servo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //turn on serial port
  pinMode(servoControlPin,OUTPUT); //servocontrolpin is an output
  pinMode(trigPin,OUTPUT); //sensor trig pin is an output
  pinMode(echoPin,INPUT); //READING the echo pin

  servo.attach(servoControlPin); //tell the arduino where the servo is connected
  
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin,LOW);  //set trigger pin low
  delay(2); //pause to let signal settle
  digitalWrite(trigPin,HIGH);  //set trigger pin high
  delayMicroseconds(15);  //brief delay while in high state
  digitalWrite(trigPin,LOW); // bring trig pin back low

  pingTime = pulseIn(echoPin,HIGH);// measure pingTime at echoPin in microseconds
  pingTime = pingTime/1000000.; //converts pingTime to seconds
  pingTime = pingTime/3600.;  //converts pingTime to hours

  targetDistance = speedOfSound * pingTime; //calculates the distance in miles
  targetDistance = targetDistance/2; //accounts for round trip of ping to target
  targetDistance = targetDistance * 63360; //convert targetDistance to inches (63360 inches in a mile)

  Serial.print("The distance to the target is: ");
  Serial.print(targetDistance);
  Serial.println(" inches");
  delay(50);

  servoAngle = (164/12) * targetDistance + 8; // servo angle calculation you did in your notebook 


 servo.write(servoAngle); // write servoAngle to the servo, servo
 delay(100); // slows the servo speed down so you dont overload the poor thing
  
  

}
