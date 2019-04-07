int redPin=11;    //red led pin to 11
int greenPin=10;    //green led pin to 10
int bluePin=6;     //blue led pin to 6
int brightness=240; //set brightness to 255 or 5v 
String colorChoice; // set up variable to hold user input
int potPin=A0;
int readValue;
int writeValue;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);  //begin serial ui
  pinMode(redPin,OUTPUT);   //set up pinmodes to output
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Please input your color choice, (off, magenta, red, orange, green, cyan, or blue) ");
  while(Serial.available()==0) {}
 

  colorChoice = Serial.readString(); //read string from serial port

  if (colorChoice=="red") {
    analogWrite(redPin,brightness);
    analogWrite(bluePin,255);
    analogWrite(greenPin,255); 
  }
  if (colorChoice=="green") {
    analogWrite(redPin,255);
    analogWrite(bluePin,255);
    analogWrite(greenPin,brightness); 
  }
  if (colorChoice=="blue") {
    analogWrite(redPin,255);
    analogWrite(bluePin,brightness);
    analogWrite(greenPin,255); 
  }

  if (colorChoice=="orange"){
    analogWrite(redPin,0);
    analogWrite(greenPin,186);
    analogWrite(bluePin,255);
  }
  if (colorChoice=="cyan"){
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
  }
  if (colorChoice=="off"){
    analogWrite(redPin,255);
    analogWrite(greenPin,255);
    analogWrite(bluePin,255);
  }
  if (colorChoice=="magenta"){
    analogWrite(redPin,0);
    analogWrite(greenPin,255);
    analogWrite(bluePin,0);
  }
 
  if (colorChoice != "red" && colorChoice != "green" && colorChoice != "magenta" && colorChoice != "cyan" && colorChoice != "blue" && colorChoice != "orange" && colorChoice != "off"){
    Serial.println("");
    Serial.println("You have not selected a valid color, try again pleb lord");
    Serial.println("");
  }


}
