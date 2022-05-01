#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
const int trigPin = 3;
const int echoPin = 2;
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
    lcd.setCursor(1, 0);
    lcd.print("Distance: ");
    lcd.setCursor(1, 1);
    lcd.print(distance);
    delay(200);
}
