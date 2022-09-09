#include <Arduino.h>
#include <Wire.h>
int A=2,B=3,C=4;
int X=8;

void setup()
{
	   pinMode(2, INPUT);
	   pinMode(3, INPUT);
	   pinMode(4, INPUT);
	   pinMode(8, OUTPUT);
}
void loop()
{
	   A=digitalRead(2);
	   B=digitalRead(3);
	   C=digitalRead(4);
           X=((!A&&!C)||(!A&&B));
//X=(B&&(C||A)&&(!A||!C));
	   digitalWrite(8,X);
}
