/*
*  Blink
*
*  The basic Arduino example. Turns on an LED on for one second,
*  then off for one second, and so on... We use pin 13 because
*  depending on your Arduino board, it has either a built-in LED
*  or a built-in resistor so that you need only an LED.
*
*  http://www.arduino.cc/en/Tutorial/Blink
*/

/*
*  There are two special functions that are a part of every Arduino sketch: 
*  setup() and loop(). The setup() is called once, when the sketch starts. 
*  It's a good place to do setup tasks like setting pin modes or initializing 
*  libraries. The loop() function is called over and over and is heart of most sketches.
*  You need to include both functions in your sketch, even if you don't need them for 
*  anything.
*/

//  VARS
int ledPin = 13; // LED connected to digital pin 13

//  FUNCTIONS
//  setup routine runs once when you press reset
void setup()
{
  Serial.begin(100);
  pinMode(ledPin, OUTPUT); //sets the digital pin as output
}

//  DELAY
//delay(1000); //creates a 1 second delay

void loop()
{
  //  Outputs a value on a pin
digitalWrite(ledPin, HIGH); //turns the LED on (HIGH is the voltage level)
/*  sets the ledPin(pin 13) to HIGH, or 5 volts. 
*  Writing a LOW to pin connects it to ground, or 0 volts
*/

/*
*  The delay() causes the Arduino to wait for the specified number of 
*  milliseconds before continuing on to the next line. There are 1000 milliseconds 
*  in a second, so the line:
*/

//  DELAY
delay(1000); //creates a 1 second delay

digitalWrite(ledPin, LOW); //turns the LED off by making the voltage LOW
delay(1000);  //waits for 1 second
}





