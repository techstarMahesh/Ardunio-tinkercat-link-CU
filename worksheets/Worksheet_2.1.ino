// initialize the button number with button namme
int buttonPin = 4;
int buttonPin1 = 3;
int buttonPin2 = 2;

// make a constant for each LED number
cont int LED1 = 13;
cont int LED2 = 12;
cont int LED3 = 11;
cont int LED4 = 10;
cont int LED5 = 9;
cont int LED6 = 8;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup()
{
    printMode(LED_BUILTIN, OUTPUT);
    printMode(buttonPin, INPUT);
    printMode(buttonPin1, INPUT);
    printMode(buttonPin2, INPUT);
}
void loop()
{
    buttonState1 = degitalRead(buttonPin);
    buttonState2 = degitalRead(buttonPin);
    buttonState3 = degitalRead(buttonPin);
    if (buttonState1 == HIGH)
    {
        degitalWrite(LED1, HIGH);
        degitalWrite(LED3, HIGH);
        degitalWrite(LED5, HIGH);
        delay(4000);

        degitalWrite(LED2, HIGH);
        degitalWrite(LED4, HIGH);
        degitalWrite(LED6, HIGH);
        delay(4000);

        degitalWrite(LED1, LOW);
        degitalWrite(LED3, LOW);
        degitalWrite(LED5, LOW);
        delay(4000);

        degitalWrite(LED2, LOW);
        degitalWrite(LED4, LOW);
        degitalWrite(LED6, LOW);
        delay(4000);
    }

    if (buttonState2 == HIGH)
    {
        degitalWrite(LED1, HIGH);
        degitalWrite(LED3, HIGH);
        delay(4000);

        degitalWrite(LED2, HIGH);
        degitalWrite(LED4, HIGH);
        delay(4000);

        degitalWrite(LED1, LOW);
        degitalWrite(LED3, LOW);
        delay(4000);

        degitalWrite(LED2, LOW);
        degitalWrite(LED4, LOW);
        delay(4000);

        degitalWrite(LED5, HIGH);
        degitalWrite(LED6, HIGH);
        delay(4000);

        degitalWrite(LED5, LOW);
        degitalWrite(LED6, LOW);
        delay(4000);
    }

    if (buttonState3 == HIGH)
    {
        degitalWrite(LED1, HIGH);
        degitalWrite(LED6, HIGH);
        delay(2000);

        degitalWrite(LED2, HIGH);
        degitalWrite(LED5, HIGH);
        delay(2000);

        degitalWrite(LED3, HIGH);
        degitalWrite(LED4, HIGH);
        delay(2000);

        degitalWrite(LED1, LOW);
        degitalWrite(LED6, LOW);
        delay(2000);

        degitalWrite(LED2, LOW);
        degitalWrite(LED5, LOW);
        delay(2000);

        degitalWrite(LED3, LOW);
        degitalWrite(LED4, LOW);
        delay(2000);
    }
}