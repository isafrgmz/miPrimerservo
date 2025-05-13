#include <Servo.h>

int ldrPin = A0;

int intensidad = 0;
int intensidadMapeada = 0; 
int servoMax = 150;
int servoMin = 30; 

Servo miServo1; 

int pos = 0; 


void setup() {
  miServo1.attach(3); 

}

void loop() {
intensidad = analogRead(A0); 
intensidadMapeada = map(intensidad, 0, 1023, servoMin, servoMax); 
pos = intensidadMapeada; 

  miServo1.write(pos); 

}
