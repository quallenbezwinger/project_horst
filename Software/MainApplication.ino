#include <Arduino.h>
#include <HCSR04.h>
#include <DRV8871.h>
#include <DRV8871Dual.h>

//global debug flag
//#define DEBUG

//pin configuration ultrasonic front sensor
#define FRONT_SENSOR_TRIGGER_PIN   14
#define FRONT_SENSOR_ECHO_PIN      13

//pin configuration motor left
#define MOTOR_LEFT_IN_1            12
#define MOTOR_LEFT_IN_2            11

//pin configuration motor right
#define MOTOR_RIGHT_IN_1           10
#define MOTOR_RIGHT_IN_2            9

HCSR04 frontSensor (FRONT_SENSOR_TRIGGER_PIN, FRONT_SENSOR_ECHO_PIN);
DRV8871 motor_left (MOTOR_LEFT_IN_1, MOTOR_LEFT_IN_2);
DRV8871 motor_right (MOTOR_RIGHT_IN_1, MOTOR_RIGHT_IN_2);
DRV8871Dual motorController (&motor_left, &motor_right);

void setup() {                          
  #ifdef DEBUG
  Serial.begin(9600);  
  Serial.println("Setup finished");
  #endif
}

void loop() {
  #ifdef DEBUG
    Serial.println("----");
  #endif
  //wait one second
  delay(1000);
}
