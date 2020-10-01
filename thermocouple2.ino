

#include "max6675.h"  //INCLUDE THE LIBRARY

int thermoDO =9 ;
int thermoCS =8 ;
int thermoCLK = 13;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);
  
void setup() {
  Serial.begin(9600);
  Serial.println("MAX6675 test");
  // wait for MAX chip to stabilize
  delay(500);
}

void loop() {
  // basic readout test, just print the current temp  
   Serial.print("C = "); 
   Serial.println(thermocouple.readCelsius());
   Serial.print("F = ");
   Serial.println(thermocouple.readFahrenheit()); 
   delay(1000);
   /*Serial.println("\n");
   float sensorValue = analogRead(A1);
  //float voltage = sensorValue * (5.0 / 1024.0);
  float voltage=0.004888*sensorValue; //in V
  float turbidity=-1120.4*voltage*voltage+5742.3*voltage-4352.9; //in NTU

  Serial.println ("Sensor Output (V):");
  Serial.println (voltage);
  
  Serial.println ("Sensor Output (ntu):");
  Serial.println (turbidity);
  
  Serial.println();
  delay(1000);*/
}
