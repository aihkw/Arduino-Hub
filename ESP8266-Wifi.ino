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
