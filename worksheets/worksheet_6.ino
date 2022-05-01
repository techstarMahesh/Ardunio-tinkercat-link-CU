int RED_LED = 12;
int GREEN_LED = 11;
int ORENGE_LED = 9;
int buzzer = 10;
int smoke = A5;

void setup()
{
    pinMode(RED_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    pinMode(ORENGE_LED, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(smoke, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int analogSensor = analogRead(smoke);

    Serial.print("SENSOR: ");
    Serial.println(analogSensor);

    if (analogSensor > 500 && analogSensor < 600)
    {
        digitalWrite(RED_LED, LOW);
        digitalWrite(ORENGE_LED, HIGH);
        digitalWrite(GREEN_LED, LOW);
        tone(buzzer, 1000, 350);
    }
    else if (analogSensor > 600)
    {
        digitalWrite(RED_LED, HIGH);
        digitalWrite(ORENGE_LED, LOW);
        digitalWrite(GREEN_LED, LOW);
        tone(buzzer, 100, 350);
    }
    else
    {
        digitalWrite(RED_LED, LOW);
        digitalWrite(ORENGE_LED, LOW);
        digitalWrite(GREEN_LED, HIGH);
        noTone(buzzer);
    }
    delay(100);
}