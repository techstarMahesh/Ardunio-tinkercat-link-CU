// initialize the button number with button namme.
int buttonPin1 = 2;
int buttonPin2 = 3;
int buttonPin3 = 4;
int leds[6] = {8, 9, 10, 11, 12, 13};

// make a constant for each LED number.
const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;
const int LED4 = 11;
const int LED5 = 12;
const int LED6 = 13;

// Defining the stage.
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup()
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
    pinMode(buttonPin3, INPUT);

    // This is for random generation of code.
    for (int j; j < sizeof(leds) / sizeof(int); j++)
    {
        pinMode(leds[j], OUTPUT);
        delay(10);
    }
}

void loop()
{
    buttonState1 = digitalRead(buttonPin1);
    buttonState2 = digitalRead(buttonPin2);
    buttonState3 = digitalRead(buttonPin3);

    // for buttom 1
    if (buttonState1 == HIGH)
    {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED5, HIGH);
        delay(4000);

        digitalWrite(LED2, HIGH);
        digitalWrite(LED4, HIGH);
        digitalWrite(LED6, HIGH);
        delay(4000);

        digitalWrite(LED1, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED5, LOW);
        delay(4000);

        digitalWrite(LED2, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED6, LOW);
        delay(4000);
    }

    // For button 2.
    if (buttonState2 == HIGH)
    {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED3, HIGH);
        delay(4000);

        digitalWrite(LED2, HIGH);
        digitalWrite(LED4, HIGH);
        delay(4000);

        digitalWrite(LED1, LOW);
        digitalWrite(LED3, LOW);
        delay(4000);

        digitalWrite(LED2, LOW);
        digitalWrite(LED4, LOW);
        delay(4000);

        digitalWrite(LED5, HIGH);
        digitalWrite(LED6, HIGH);
        delay(4000);

        digitalWrite(LED5, LOW);
        digitalWrite(LED6, LOW);
        delay(4000);
    }

    // for buttom 3
    if (buttonState3 == HIGH)
    {
        // This is for random generation of code
        digitalWrite(leds[random(0, sizeof(leds) / sizeof(int))], HIGH);
        delay(random(20, 200));
        digitalWrite(leds[random(0, sizeof(leds) / sizeof(int))], LOW);
    }
}