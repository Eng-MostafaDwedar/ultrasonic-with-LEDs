int red1=10;
int red2=9;
int red3=5;
int red4=3;
int echo=A0;
int trig=11;
long t=0;
long d=0;
void setup()
{
pinMode(red1,1);
pinMode(red2,1);
pinMode(red3,1);
pinMode(red4,1);
pinMode(trig,1);
pinMode(echo,0);
}

void loop()
{
digitalWrite(trig,0);
delayMicroseconds(2);
digitalWrite(trig,1);
delayMicroseconds(10);
digitalWrite(trig,0);
t= pulseIn(echo,1);
d= (t/2)*0.0343;
switch (d){
case  0 ... 100 :
digitalWrite(red1,1);
digitalWrite(red2,0);
digitalWrite(red3,0);
digitalWrite(red4,0);
break;
case  101 ... 200 :
digitalWrite(red2,1);
digitalWrite(red1,1);
digitalWrite(red3,0);
digitalWrite(red4,0);
break;
case  201 ... 300 :
digitalWrite(red3,1);
digitalWrite(red1,1);
digitalWrite(red2,2);
digitalWrite(red4,0);
break;
case  301 ... 400 :
digitalWrite(red4,1); 
digitalWrite(red1,1);
digitalWrite(red2,1);
digitalWrite(red3,1);
break;
default:
digitalWrite(red1,0);
digitalWrite(red2,0);
digitalWrite(red3,0);
digitalWrite(red4,0);
break;
}
}