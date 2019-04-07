int potPin=A0;
int redLED=11;
int redLED2=10;
int redLED3=9;             
int redLED4=6;
int redLED5=5;
int redLED6=3;
int onTime=1000;        //Variables for on and off times for your LED's.
int onTime2=1000;
int onTime3=1000;
int onTime4=1000;
int onTime5=1000;
int onTime6=1000;
int offTime=100;
int offTime2=1000;
int offTime3=1000;
int offTime4=1000;
int offTime5=1000;
int offTime6=1000;
int numLEDBlink;       //number of times to blink the LED's. Used in for loops
int numLEDBlink2=1;
int numLEDBlink3=1;
int numLEDBlink4=1;
int numLEDBlink5=1;
int numLEDBlink6=1;
int readValue;
int writeValue;
int brightness = 1;




void setup() {
  Serial.begin(9600);       // turns on serial port (speed). its for communicating with the arduino
  String wm= " Welcome to ";     //wm = welcome message
  String wm2= "my nerd thing.";
  String wm3;
  wm3 = wm+wm2;                // concatonating wm and wm2 into one line
  Serial.println(wm3);
  Serial.println();
                             // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  pinMode(redLED,OUTPUT);       //tell arduino these are output pins
  pinMode(redLED2,OUTPUT);
  pinMode(redLED3,OUTPUT);
  pinMode(redLED4,OUTPUT);
  pinMode(redLED5,OUTPUT);
  pinMode(redLED6,OUTPUT);
  
}
  
 



   //_____Below we are mixing while loops with for loops. it accomplishes the same end result on how the program runs. 
   //_____pretty much just a different format on how the code gets executed.

   
void loop(){

  readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(redLED4,writeValue);
  delay(readValue); 
  analogWrite(redLED4,brightness);
  Serial.println();
  
   readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(redLED2,writeValue);
  delay(readValue);  
  analogWrite(redLED2,brightness);
  Serial.println();

   readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(redLED6,writeValue);
  delay(readValue);  
  analogWrite(redLED6,brightness);
  Serial.println();

   readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(redLED3,writeValue);
  delay(readValue);  
  analogWrite(redLED3,brightness);
  Serial.println();

   readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(redLED5,writeValue);
  delay(readValue);  
  analogWrite(redLED5,brightness);
  Serial.println();

   readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(redLED,writeValue);
  delay(readValue);  
  analogWrite(redLED,brightness);
  Serial.println();
}
