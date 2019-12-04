#include <Servo.h>


int pot4 = A4;  //POTENCIOMETRO A4
int pot5 = A5;  //POTENCIOMETRO A5
int motor1 = 5;  //MOTOR 1
int motor2 = 6;  //MOTOR 2
int acel0;
int acel1;

Servo ESC0;
Servo ESC1;

void setup() {
   ESC0.attach(motor2, 1000, 1200);
   ESC1.attach(motor1, 1000, 1200);
  
  Serial.begin(115200);
}

void loop() {
  acel0 = analogRead(pot4);
  acel1 = analogRead(pot5);

  acel0 = map(acel0,0,1023,0,180);
  acel1 = map(acel1,0,1023,0,180);
 
 ESC0.write(acel0);
  ESC1.write(acel1);
 
// Serial.println(acel);
 }

  
