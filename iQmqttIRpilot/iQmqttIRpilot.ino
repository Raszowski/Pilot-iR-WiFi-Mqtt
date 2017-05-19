#include <ESP8266WiFi.h>
//#include <WiFiClient.h>
#include <IRremoteESP8266.h>
#include <MQTTClient.h>


//DallasTemperature sensors(&oneWire);
IRsend irsend(4); //an IR led is connected to GPIO pin 4 (D2)

// Update these with values suitable for your network.
const char* ssid          = "iQwifiESP";        //wifi name
const char* password      = "espwifi666";       //wifi secure

const char* mqtt_server   = "192.168.0.88";     //ip/host mqtt server
const char* mqtt_user     = "mqtt";             //username mqtt server
const char* mqtt_password = "mqtt";             //password mqtt server
const char* mqtt_ID       = "ESP12iR";           //user ID mqtt server


MQTTClient client;
WiFiClient wifiClient;

void setup_wifi(void) {
  Serial.println();
  Serial.println("Pilot load OK.");
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(ssid, password);

  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    WiFi.begin(ssid, password);
    Serial.println("WiFi failed, retrying.");
    delay(100);

  }
}

void mqtt() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Connecting to MQTT server ... -> ");
    if (client.connect(mqtt_ID, mqtt_user, mqtt_password)) {
      Serial.print("Connected - MQTT ");
      Serial.println(mqtt_server);
      client.subscribe("/iQ/#");
    } else {
      Serial.print("failed, rc=");
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup()
{
  irsend.begin();
  Serial.begin(74880);
  WiFi.hostname("ESP12iR");
  WiFi.softAP("ESP12iR");
  client.begin(mqtt_server, wifiClient);
  setup_wifi();
}

void loop()
{
  client.loop();
  if (!client.connected()) {
    mqtt();
  }
}


