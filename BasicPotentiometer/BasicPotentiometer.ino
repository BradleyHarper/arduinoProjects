

int LEDPin=9;
int potPin=A0;                //assigning potentiameter pin to pin A0
int readValue;             //Declaring our readvalue variable
int writeValue;                 // this variable reads the potentiometer

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin,OUTPUT);
  pinMode(potPin,INPUT);               //establish this is an input for reading data
  Serial.begin(9600);             //prints to the serial UI
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(potPin);          //stores the value for the data given from potPin(0-1023)
  writeValue = (255./1023.) * readValue;     //calculate the write value
  analogWrite(LEDPin,writeValue);    // write to the led. adjust the brightness using the value from the pot
  Serial.println(writeValue);
}
