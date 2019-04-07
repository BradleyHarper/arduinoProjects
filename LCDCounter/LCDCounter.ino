#include <LiquidCrystal.h>  // load in the lcd library
LiquidCrystal LCD(10,9,5,4,3,2); //creating the LiquidCrystal object named LCD

int myCounter = 0; //declare the variable myCounter

void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2); // tell arduino our lcd has 16 colums and 2 rows
  LCD.setCursor(0,0); // set lcd cursor to upper left corner of lcd
  LCD.print("DETONATION IN: "); // print our first line
}

void loop() {
  // put your main code here, to run repeatedly:

  for (myCounter=1; myCounter<=10; myCounter=myCounter+1) {

    LCD.setCursor(0,1); // set cursor to first column second row
    LCD.print("                "); //clear the line

    LCD.setCursor(0,2);  //set cursor to first column and second row
    LCD.print(myCounter);  //prints the counter in the for loop
    LCD.print(" seconds");  //print units
    delay(1000); //delay by 1000 milliseconds or 1 second
  }

    for (myCounter=10; myCounter>=1 ; myCounter=myCounter-1) {

    LCD.setCursor(0,1); // set cursor to first column second row
    LCD.print("                "); //clear the line

    LCD.setCursor(0,2);  //set cursor to first column and second row
    LCD.print(myCounter);  //prints the counter in the for loop
    LCD.print(" seconds");  //print units
    delay(1000); //delay by 1000 milliseconds or 1 second
  }

    
}
