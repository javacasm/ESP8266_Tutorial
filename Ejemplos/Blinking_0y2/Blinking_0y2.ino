/* Test de GPIO para el ESP8266

// by @javacasm
*/

#define GPIO0 0
#define GPIO2 2

#define pausa 500

void setup() {
  pinMode(GPIO0, OUTPUT);
  pinMode(GPIO2, OUTPUT);
}


void loop() {
  digitalWrite(GPIO0, HIGH); 
  delay(pausa);              
  digitalWrite(GPIO0, LOW);  
  delay(pausa);              
  digitalWrite(GPIO2, HIGH); 
  delay(pausa);              
  digitalWrite(GPIO2, LOW);    
  delay(pausa);      
}
