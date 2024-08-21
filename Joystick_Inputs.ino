int xAxisPin = 0;       //creates an interger called xAxisPin and assigns it to pinA0
int yAxisPin = 1;       //creates an interger called yAxisPin and assigns it to pinA1
int zAxisPin = 8;       //creates an interger called zAxisPin and assigns it to pin8
int xVal, yVal, zVal;   //creates intergers to store the values of X, Y, and Z

void setup() {
  pinMode(zAxisPin, INPUT_PULLUP);  //sets the ports to pull-up inputs
  Serial.begin(9600);               //opens the serial port with baud rate 9600
}

void loop() {
  xVal = analogRead(xAxisPin);    //updates the xVal with the analog reading of xAxisPin
  yVal = analogRead(yAxisPin);    //updates the yVal with the analog realinf of yAxisPin
  zVal = digitalRead(zAxisPin);   //Updates the zVal by reading the current state of the switch

  //Prints the X, Y, and Z values along with their values.
  Serial.print("X : ");
  Serial.print(xVal);
  Serial.print(" Y : ");
  Serial.print(yVal);
  Serial.print(" Z : ");
  Serial.println(zVal);
  delay(200);             //waits 200ms
}
