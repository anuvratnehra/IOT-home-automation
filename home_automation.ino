#define BLYNK_TEMPLATE_ID "TMPLCJwW6vgX"
#define BLYNK_DEVICE_NAME "IOT Project"
#define BLYNK_AUTH_TOKEN "KD3Cv-T179OJUZ9X7pq27LR-176yFlfj"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

int v0 = 0;
int v1 = 0;
int v2 = 0;
int v3 = 0;
int v4 = 0;
int v5 = 0;
int v6 = 0;

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Anuvrat";
char pass[] = "j5i8dh26";

BLYNK_WRITE(V0)
{
    Serial.println("Light 1");
    v0 = param.asInt(); // light_D1
    if (v0 == 1)
    {
        digitalWrite(D1, HIGH);
    }
    else
    {
        digitalWrite(D1, LOW);
    }
}
BLYNK_WRITE(V1)
{
    Serial.println("Light 2");
    v1 = param.asInt(); // light_D2
    if (v1 == 1)
    {
        digitalWrite(D2, HIGH);
    }
    else
    {
        digitalWrite(D2, LOW);
    }
}
BLYNK_WRITE(V2)
{
    v2 = param.asInt(); // buzz_d4
    if (v2 == 1)
    {
        digitalWrite(D4, HIGH);
    }
    else
    {
        digitalWrite(D4, LOW);
    }
}
BLYNK_WRITE(V3)
{
    Serial.println("Light 1 voice");
    v3 = param.asInt(); // light_D1_VOICE
    Serial.println(v3);
    if (v3 == 1)
    {
        digitalWrite(D1, HIGH);
    }
}
BLYNK_WRITE(V4)
{
    v4 = param.asInt(); // light_D2_VOICE
    Serial.println("Light 2 voice");
    if (v4 == 1)
    {
        digitalWrite(D2, HIGH);
    }
    else
    {
        digitalWrite(D2, LOW);
    }
}
BLYNK_WRITE(V5)
{
    Serial.println(" Buzzer voice");
    v5 = param.asInt(); // BUZZER_VOICE
    if (v5 == 1)
        13 { digitalWrite(D4, HIGH); }
    else
    {
        digitalWrite(D4, LOW);
    }
}
BLYNK_WRITE(V6)
{
    Serial.println(" sevo motor");
    v6 = param.asInt(); // servo
    if (v6 == 1)
    {
        digitalWrite(D5, HIGH);
    }
    else
    {
        digitalWrite(D5, LOW);
    }
}
void setup()
{
    Serial.begin(115200);
    Blynk.begin(auth, ssid, pass);
    pinMode(D1, OUTPUT); // LIGHT1
    pinMode(D2, OUTPUT); // LIGH2
    pinMode(D4, OUTPUT); // BUZZER
    pinMode(D5, OUTPUT); // BUZZER
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D4, HIGH);
    digitalWrite(D5, HIGH);
}
void loop()
{
    Blynk.run();
}