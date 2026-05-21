int ledPin = 7; 
int tempPin = A0; 
void setup() 
{ 
pinMode(ledPin,OUTPUT); 
Serial.begin(9600); //Setting the serial communication between the Arduino 
and Serial monitor at 9600 bits per second 
} 
void loop () 
{ 
int result = analogRead(tempPin);//Reads the temperature value from the 
Arduino analog input pin A0 
Serial.println(result); 
if(result>300) 
{ 
} 
digitalWrite(ledPin,HIGH); 
else  
{ 
} 
digitalWrite(ledPin,LOW); 
delay (100); 
} 

