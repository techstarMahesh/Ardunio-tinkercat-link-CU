float temp;
const int buzzer = 8;
void setup()
{
    pinMode(A0, INPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    temp = analogRead(A0);
    temp = ((temp * 5) / 1024);
    temp = (temp - 0.5) * 100;
    Serial.print("Temperature = ");
    Serial.println(temp);
    if (temp <= 25)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        noTone(buzzer);
        delay(1000);
    }
    if (temp > 25 && temp <= 50)
    {
        digitalWrite(11, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
        noTone(buzzer);
        delay(1000);
    }
    if (temp > 50)
    {
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
        tone(buzzer, 1000);
        delay(1000);
    }
}