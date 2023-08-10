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

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
