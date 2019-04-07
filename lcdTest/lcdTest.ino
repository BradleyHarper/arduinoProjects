#include <LiquidCrystal.h> 
LiquidCrystal LCD(10,9,5,4,3,2);

int button = 8;
int counter = 0;

void setup() {

  Serial.begin(9600);
  pinMode(button,INPUT);
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  
}

void loop() {
  if (button) {
    //LCD.setCursor(0,1);
    //LCD.print("                ");
    LCD.setCursor(0,2);
    //LCD.print("                ");
    LCD.print("Hello");
    delay(100);
    Serial.print(button);
    }else{
    LCD.setCursor(0,2);
    LCD.print("                ");  
  }
}
