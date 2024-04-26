#include <ESP8266WebServer.h>
#include <ESP8266WiFi.h>

const char *ssid = "";
const char *password = "";

const int led = 2;

ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);

  connectToWifi();
  delay(100);
  
  server.on("/", slashRoot);
  server.onNotFound(error404);
  
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}

// Wifi
void connectToWifi() {
  //Connect to WiFi Network
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);
  int retries = 0;
  digitalWrite(led, HIGH);
  while ((WiFi.status() != WL_CONNECTED) && (retries < 15)) {
    retries++;
    delay(500);
    Serial.print(".");
  }
  if (retries > 14) {
    Serial.println(F("WiFi connection FAILED"));
    digitalWrite(led, HIGH);
  }
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println(F("WiFi connected!"));
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    digitalWrite(led, LOW);
  }
  Serial.println(F("Setup ready"));
}

// Directories
void slashRoot() {
  server.send(200, "text/html",
  "<html>"
    "<head>"
      "<title>sakanigadik</title>"
    "</head>"
  "</html>"); 
}
void error404(){
  server.send(404, "text/html", "Not found");
}
