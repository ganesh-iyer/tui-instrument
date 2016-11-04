
/* Theremin
 * --------
 *
 *
 * Created 24 October 2006
 * copyleft 2006 Tod E. Kurt &lt;tod@todbot.com
 * http://todbot.com/
 */

int potPin = A0;    // select the input pin for the potentiometer
int potPin2 = A1; 
int potPin3 = A2;
int FSR = A3;
int light = A4;
int val4;
int val2;
int val3;
int val;
int val5;

void setup() {

  Serial.begin(9600);
  Serial.println("ready");
}

void loop() {

  val = analogRead(potPin);    // read value from the sensor
  val2 = analogRead(potPin2); 
  val3 = analogRead(potPin3);
  val4 = analogRead(FSR);
  val5 = analogRead(light);

  Serial.println(" val: " +  String(val) + "val2:" + String(val2) + "val3: " + String(val3) + "val4:" + String(val4) + "val5:" + String(val5));

                   // process the value a little

}

