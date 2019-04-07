int redPin = 11;
int greenPin = 10;
int bluePin = 6;

int r = 0;
int g = 0;
int b = 0;

int potPin=A0;
int readValue;
int writeValue;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() { 
  setColor(255, 0, 0);    // red
  setColor(0, 255, 0);    // green
  setColor(0, 0, 255);    // blue
  setColor(255, 255, 0);  // yellow
  setColor(80, 0, 80);    // purple
  setColor(0, 255, 255);  // aqua
}

void setColor(int red, int green, int blue) {
  while ( r != red || g != green || b != blue ) {
    if ( r < red ) r += 1;
    if ( r > red ) r -= 1;

    if ( g < green ) g += 1;
    if ( g > green ) g -= 1;

    if ( b < blue ) b += 1;
    if ( b > blue ) b -= 1;

    _setColor();
    readValue = analogRead(potPin);
    writeValue = (255./1023.) * readValue/5;
    delay(writeValue);
    Serial.println(writeValue);
    
  }
}

void _setColor() {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b); 
}
