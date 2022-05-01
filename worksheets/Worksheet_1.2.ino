/*
  Blinking LEDs - test program to run 3 LEDs in a pattern of blinks
*/

int led1 = 0;
int led2 = 1;
int led3 = 2;
int led4 = 3;
int led5 = 4;

// the setup routine runs once when you press reset:
void setup()
{
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()
{
  digitalWrite(led1, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(80);                // wait for 1/2 a second
  digitalWrite(led1, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(led2, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(80);                // wait for 1/2 a second
  digitalWrite(led2, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(led3, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(80);                // wait for 1/2 a second
  digitalWrite(led3, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(led4, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(80);                // wait for 1/2 a second
  digitalWrite(led4, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(led5, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(80);                // wait for 1/2 a second
  digitalWrite(led5, LOW);  // turn the LED off by making the voltage LOW
  delay(500);               // wait for a second
}
