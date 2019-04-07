int trigPin=13;
int echoPin=11; //sensor echopin connected to arduino11
float pingTime; //time for ping to hit target and return
float speedOfSound;  // we will calculate speed of sound later
float targetDistance=4;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //turn on serial port
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW); // set trigger pin low
  delayMicroseconds(2000);  // pause to let signal settle
  digitalWrite(trigPin,HIGH); //now trigpin will be high
  delayMicroseconds(10);  //pause with trigger pin high so arduino has enough time to read it
  digitalWrite(trigPin,LOW); //finish trigger pulse by bringing it low

  pingTime=pulseIn(echoPin,HIGH);  //measures the ping travel time in microseconds

  speedOfSound = 2*targetDistance/pingTime;   //gives us speed in inches per microseconds 
  speedOfSound=speedOfSound/63360*1000000*3600;  //gives us speed of sound in miles per hour
  Serial.print("The speed of sound is: ");
  Serial.print( speedOfSound);
  Serial.println(" miles per hour.");
  delay(500);

  

}
