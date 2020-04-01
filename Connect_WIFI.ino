#include <WiFi.h>

const char* ssid       = "*****";
const char* password   = "*****";

void WIFI_connect() {
    Serial.printf("Connecting to %s ", ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println(" CONNECTED");
}


void setup() {
  Serial.begin(115200);
  WIFI_connect();


}

void loop() {
  // put your main code here, to run repeatedly:

}
