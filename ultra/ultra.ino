#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int trigPin = 7;
const int echoPin = 6;
long duration;
int distance;
void setup()
{
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print(distance);
  lcd.noBlink();
  lcd.setCursor(8, 0);
  lcd.print("Distance: ");
  lcd.setCursor(8, 1);
  lcd.print(distance);
  delay(200);
}
