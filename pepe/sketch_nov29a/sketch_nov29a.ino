#include <Servo.h>
#include <Servo.h>
#include <Servo.h>
Servo pepe1;
Servo pepe2;
Servo pepe3;
int const pinpon1=A0;
int const pinpon2=A1;
int const pinpon3=A2;
const int s = 9;
int potva1;
int potva2;
int potva3;
int angle1;
int angle2;
int angle3;

void setup(){
  pepe1.attach(3);
  pepe2.attach(5);
  pepe3.attach(6);
  Serial.begin(9600);
}
void loop(){
  Serial.print(" po1:");
  Serial.println(angle1);
  Serial.print(", po2:");
  Serial.print(angle2);
  Serial.print(", po3:");
  Serial.print(angle3);
  Serial.print(", s:");
  Serial.println( digitalRead(s));
  pepe3.write(0);
  
 
  potva1= analogRead(pinpon1);
  angle1=map(potva1,0,1023,0,179);
  pepe1.write(angle1);

  potva2= analogRead(pinpon2);
  angle2=map(potva2,0,1023,0,179);
  pepe2.write(angle2);
  
  if(digitalRead(s)== 1){
    pepe3.write(180);
    delay(200);
   }
  
}
