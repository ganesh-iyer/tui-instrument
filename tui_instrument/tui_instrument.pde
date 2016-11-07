import processing.serial.*;
import cc.arduino.*;
Arduino arduino;
int ledPin = 13;
int val;
int val1;
int val2;
int val3;

void setup()
{
//println(Arduino.list());
arduino = new Arduino(this, Arduino.list()[1], 57600);
arduino.pinMode(ledPin, Arduino.OUTPUT);
arduino.pinMode(0, Arduino.INPUT);//setup pins to be input (A0 =0?)
}

void draw()
{
arduino.digitalWrite(ledPin, Arduino.HIGH);
delay(500);
arduino.digitalWrite(ledPin, Arduino.LOW);
delay(500);
val = arduino.analogRead(0);
val1 = arduino.analogRead(1);
val2 = arduino.analogRead(2);
val3 = arduino.analogRead(3);
println("A0: " + val + " A1: " + val1 + " A2: " + val2 + " A3: " + val3);
}