#include<Servo.h>
Servo s1;
void setup() 
{
  s1.attach(10);
}
void loop()
{
  s1.write(30);
  delay(1000);
   s1.write(60);
  delay(1000);
   s1.write(90);
  delay(1000);
   s1.write(120);
  delay(1000);
   s1.write(200);
  delay(1000);
   s1.write(220);
  delay(1000);

}
