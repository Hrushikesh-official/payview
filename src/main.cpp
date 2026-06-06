#include <Arduino.h>
#include "../include/config.h"
#include "modules/wifi_manager.h"

void setup() {
    Serial.begin(115200);

    Serial.println("================================");
    Serial.println("PAYVIEW STARTING");
    Serial.println("================================");

    Serial.print("Device Name: ");
    Serial.println(DEVICE_NAME);

    connectWiFi();
}

void loop() {
    Serial.println("System Running...");
    delay(1000);
}