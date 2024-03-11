#include <cogcloudesp8266.h>

String ssid = "akconnect";
String pass = "Ramnagarnashik";

String apikey = "18aa7ae100e5b1b2183c71256a22c53b";

void setup ()
{
  pinMode(D5,OUTPUT);
  
  Serial.begin(9600);
  cogInitCloud (ssid,pass,apikey);
  cogBindPin (D5,"LED");
}

void loop ()
{

  cogAppLoop();
  

  
  
}
