#include <SPI.h>
#include <WiFi.h>

char ssid[] = "Your SSID goes here";
char password[] = "password for SSID goes here";
void setup()
{
	Serial.begin(115200);
	WiFi.begin(ssid, password);
        // we need to start a loop to allow the connection to the Wifi Access point to occur
	while ( WiFi.status() != WL_CONNECTED) {
		// print dots while we wait to connect with a 50 millisecond delay loop
		Serial.print(" . .");
		delay(50);
	}
	Serial.println("The IoT device is connected, now getting an IP address for your device ");
	Serial.println("Waiting for an ip address");
	while (WiFi.localIP() == INADDR_NONE) {
		// print dots while we wait for an ip addresss with a 50 millisecond delay loop
		Serial.print(" . .");
		delay(50);
	}
	Serial.println("Your IoT device has an IP address");
	//Serial.print("IP Address: ");
        IPAddress ip = WiFi.localIP();
        Serial.println(ip);
}



void loop()
{

}

