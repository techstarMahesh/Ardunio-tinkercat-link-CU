#include <IRremote.h>
int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
    Serial.begin(9600);
    irrecv.enableIRIn();
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
}
void loop()
{
    if (irrecv.decode(&results))
    {
        Serial.println(results.value, DEC);
        if (results.value == 16582903)
        {
            digitalWrite(8, HIGH);
            digitalWrite(6, LOW);
        }
        if (results.value == 16615543)
        {
            digitalWrite(6, HIGH);
            digitalWrite(8, LOW);
        }
        if (results.value == 16580863)
        {
            digitalWrite(8, LOW);
            digitalWrite(6, LOW);
        }
        irrecv.resume();
    }
}