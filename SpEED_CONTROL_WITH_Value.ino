int potPin = A0;
int motorPin = 9;
int potValue = 0;
int motorValue = 0;
void setup()
{
 Serial.begin(9600);
}
void loop() {
 potValue = analogRead(potPin);  
 motorValue = map(potValue, 0, 1000, 0, 255);
 
 //digitalWrite(motorPin,motorValue);
 
 analogWrite(motorPin, motorValue);  
 Serial.print("potentiometer = " );     
 Serial.print(potValue);
 Serial.print("t motor = ");
 Serial.println(motorValue);
 delay(2);    
}
