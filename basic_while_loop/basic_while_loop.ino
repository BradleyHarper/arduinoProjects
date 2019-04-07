void setup() {
  Serial.begin(9600);

}

void loop() {
  int j=2;   //Declare that j is an int and set it equal to 1

  while (j<=20){
    Serial.print("You are on loop number ");
    Serial.println(j);
    delay(250);
    j=j+2;
    }
    Serial.println(" ");

}
