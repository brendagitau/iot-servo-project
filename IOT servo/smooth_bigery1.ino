#include <Servo.h>
Servo myservo;
int potPin=4;
int red=13;
int green=2;
int blue=5;
int trigPin = 11;
int echoPin = 10;
long distance;
long duration;
int val;
 
void setup() 
{
myservo.attach(9); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
  
  
     Serial.begin(9600);
}
 
void loop() { myservo.write(0);
  
  if (distance<=100)
  {
             digitalWrite(red,HIGH);
             delay(1000);
             digitalWrite(red,LOW);
             delay (1000);
             myservo.write(100);
   
    
  }
   if (distance<=100)
              
         {
             digitalWrite(blue,HIGH);
             delay(1000);
             digitalWrite(blue,LOW);
             delay(1000);
             myservo.write(120);
   
 }else
 { myservo.write(0);}
  
  
if (distance<=100)
              
         {
             digitalWrite(green,HIGH);
             delay(1000);
             digitalWrite(green,LOW);
             delay(1000);
             myservo.write(170);
   
 }else
 { myservo.write(0);}  
  
       
  /*ultra();
  servo1.write(0);
  if(distance >=100){
  servo1.write(180);
  }
  else{servo1.write(0);}
}
 
void ultra(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH)*/

}



/*#include<Servo.h>
int potpin=4;
int red=1;
int green=2;
int blue=3;
int val;
Servo myservo;
int trigPin=6; 
int echoPin=7;
long distance;
long duration;



void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  myservo.attach(9);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop()
{
  
  myservo.write(4);
  
  if (distance<=100)
  {
             digitalWrite(red,HIGH);
             delay(1000);
             digitalWrite(red,LOW);
             delay (1000);
             myservo.write(60);
   
    
  }
   if (distance<=100)
              
         {
             digitalWrite(green,HIGH);
             delay(1000);
             digitalWrite(green,LOW);
             delay(1000);
             myservo.write(120);
   
 }else
 { myservo.write(0);}
  
  
if (distance<=100)
              
         {
             digitalWrite(blue,HIGH);
             delay(1000);
             digitalWrite(blue,LOW);
             delay(1000);
             myservo.write(180);
   
 }else
 { myservo.write(0);}  
  
       
}*/
