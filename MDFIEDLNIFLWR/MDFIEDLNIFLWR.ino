/*-------definning Inputs------*/



/*-------definning Outputs------*/
#define RelayPWR1 2
#define RelayPWR2 3
#define Relay1 6
#define Relay2 7
#define GND1 4
#define GND2 5

void setup()
{
 pinMode(RelayPWR1,OUTPUT);
 pinMode(RelayPWR2,OUTPUT);
 pinMode(Relay1,OUTPUT);
 pinMode(Relay2,OUTPUT);
 pinMode(GND1,OUTPUT);
 pinMode(GND2,OUTPUT);
 digitalWrite(RelayPWR1,HIGH);
 digitalWrite(RelayPWR2,HIGH);
 digitalWrite(GND1,LOW);
 digitalWrite(GND2,LOW);
} 

void loop(){
 digitalWrite(Relay1,HIGH);
 digitalWrite(Relay2,HIGH);
 delay(1000);
 digitalWrite(Relay1,LOW);
 digitalWrite(Relay2,LOW);
 delay(1000);
 digitalWrite(RelayPWR1,HIGH);
 digitalWrite(RelayPWR2,HIGH);
}
