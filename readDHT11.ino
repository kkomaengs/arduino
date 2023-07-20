byte humidity = 0;
#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 13 //아두이노 핀 10번으로 정의하겠다.

void setup(){
  Serial.begin(9600); //컴퓨터와 통신을 115200속도로 하겠다.)
}

void loop(){
  DHT.read(DHT11_PIN);
  Serial.print("temp:");
  Serial.print(DHT.temperature);
  Serial.print("  humi:");
  Serial.println(DHT.humidity);
  delay(1000);
}
