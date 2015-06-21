/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
*/

const int ledPin =  1;         // The blue LED on the ESP-01 module is connected to GPIO1 
                               // (which is also the TXD pin; so we cannot use 
                               // Serial.print() at the same time

void setup() {
  pinMode(ledPin, OUTPUT);     // Initialize the ledPin as an output
  ESP.wdtDisable();            // Disable the watchdog timer built into the ESP8266
                               // otherwise the ESP8266 reboots during the "delay(1000);"
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, LOW);   // turn the LED on (Note that LOW is the voltage level
                               // but actually the LED is on; this is because 
                               // it is acive low on the ESP-01)
  delay(1000);                 // Wait for a second
  digitalWrite(ledPin, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(2000);                 // Wait for two seconds (to demonstrate the active low LED)
}
