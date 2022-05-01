int A = 6;
int B = 5;
int C = 2;
int D = 3;
int E = 4;
int F = 7;
int G = 8;
int DP = 1;
int digit1 = 9;
int digit2 = 10;
char mynumber[10] =
    {
        0b0111111,
        0b0000110,
        0b1011011,
        0b1001111,
        0b1100110,
        0b1101101,
        0b1111101,
        0b0000111,
        0b1111111,
        0b1101111,
};
void setup()
{
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);
    pinMode(digit1, OUTPUT);
    pinMode(digit2, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}
void number(int num)
{
    digitalWrite(A, num & 0b0000001);
    digitalWrite(B, num & 0b0000010);
    digitalWrite(C, num & 0b0000100);
    digitalWrite(D, num & 0b0001000);
    digitalWrite(E, num & 0b0010000);
    digitalWrite(F, num & 0b0100000);
    digitalWrite(G, num & 0b1000000);
}
int t;
int i;
int n;
void loop()
{
    n = 1;
    t = 0;
    while (1)
    {
        i++;
        if (i == 100)
        {
            i = 0;
            t--;
        }
        else if (t == -1)
        {
            t = 9;
            n--;
        }
        digitalWrite(11, 1);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 1);
        number(mynumber[n]);
        digitalWrite(digit1, 0);
        digitalWrite(digit2, 1);
        delay(10);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 1);
        number(mynumber[t]);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 0);
        delay(10);
        if (t == -1 && n == 0)
        {
            digitalWrite(11, 0);
            break;
        }
    }
    n = 0;
    t = 5;
    while (2)
    {
        i++;
        if (i == 10)
        {
            i = 0;
            t--;
        }
        else if (t == -1)
        {
            t = 9;
            n--;
        }

        digitalWrite(12, 1);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 1);
        number(mynumber[n]);
        digitalWrite(digit1, 0);
        digitalWrite(digit2, 1);
        delay(10);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 1);
        number(mynumber[t]);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 0);
        delay(10);
        if (t == -1 && n == 0)
        {
            digitalWrite(12, 0);
            break;
        }
    }
    t = 0;
    n = 1;
    while (3)
    {
        i++;
        if (i == 10)
        {
            i = 0;
            t--;
        }
        else if (t == -1)
        {
            t = 9;
            n--;
        }
        digitalWrite(13, 1);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 1);
        number(mynumber[n]);
        digitalWrite(digit1, 0);
        digitalWrite(digit2, 1);
        delay(10);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 1);
        number(mynumber[t]);
        digitalWrite(digit1, 1);
        digitalWrite(digit2, 0);
        delay(10);
        if (t == -1 && n == 0)
        {
            digitalWrite(13, 0);
            break;
        }
    }
}