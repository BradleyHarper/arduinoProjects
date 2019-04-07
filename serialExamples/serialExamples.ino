
String myName;   //declare a string variable to hold name
int age;         //declare int variable for age
float height;     //declare float variable to hold your height



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);     //turning on serial port at 9600 baud

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What is your name?");     //prompt the user for his/her name
  while (Serial.available()==0) {
    }     //waiting for user input
  myName = Serial.readString();          //reading the string the user inputs

   Serial.println("How old are you?");     //prompt the user for his/her age
  while (Serial.available()==0) {
    }     //waiting for user input
  age = Serial.parseInt();          //reading the string the user inputs

   Serial.println("How tall are you?");     //prompt the user for height measurement
  while (Serial.available()==0) {
    }     //waiting for user input
  height = Serial.parseFloat();          //reading the string the user inputs
   Serial.println(" ");

  Serial.print("Hello ");        //produce nicelly formatted output
  Serial.print(myName);
  Serial.print(" , you are ");
  Serial.print(age);
  Serial.println(" years old.");
  Serial.print(" and you are ");
  Serial.print(height);
  Serial.println(" feet tall.");
  Serial.println(" ");

}
