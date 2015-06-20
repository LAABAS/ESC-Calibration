/*
This file is used to calibrate Electronic Speed Controllers (ESCs) by setting the 
 values which correspond to minimum and maximum speeds. 
*/



#define MAX_SIGNAL 4000
#define MIN_SIGNAL 2260
#define motorPin1 6
#define motorPin2 5
#define motorPin3 4
#define motorPin4 3

 int Motor_1=7;
 int Motor_2=6;
 int Motor_3=8;
 int Motor_4=9;

void setup() {
  Serial.begin(9600);
  Serial.println("Program begin...");
  Serial.println("This program will calibrate the ESC.");

  

  Serial.println("Now writing maximum output.");
  Serial.println("Turn on power source, then wait 2 seconds and press any key.");
    
   analogWrite(Motor_2, MAX_SIGNAL);
   analogWrite(Motor_1, MAX_SIGNAL);
   analogWrite(Motor_3, MAX_SIGNAL);
   analogWrite(Motor_4, MAX_SIGNAL);
  
  // Wait for input
  while (!Serial.available());
  Serial.read();
  delay(5000);
  // Send min output
  Serial.println("Sending minimum output");
   analogWrite(Motor_2, MIN_SIGNAL);
   analogWrite(Motor_1, MIN_SIGNAL);
   analogWrite(Motor_3, MIN_SIGNAL);
   analogWrite(Motor_4, MIN_SIGNAL);
}

void loop() {  

}
