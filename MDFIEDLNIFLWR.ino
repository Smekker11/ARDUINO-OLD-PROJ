/*-------definning Inputs------*/
#define LS  12    // left sensor
#define RS  11    // right sensor


/*-------definning Outputs------*/
#define IN1 2   // left motor
#define IN2 3   // left motor
#define IN3 4  // right motor
#define IN4 5// right motor
#define EN1 9
#define EN2 10
int SpeedUP = 255;

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}

void loop(){
if((digitalRead(LS)==LOW) && (digitalRead(RS)==LOW))    // Condition_1 stop
{    
    MoveForward();
  }
  
  if((digitalRead(LS)==HIGH) && (digitalRead(RS)==HIGH))  //CONDITION-2 FORWRD
  {
      Stop();
    }
  if((digitalRead(LS)==LOW) && (digitalRead(RS)==HIGH))  // RIGHT
  {
    TurnRight();
  }
  if((digitalRead(LS)==HIGH) && (digitalRead(RS)==LOW))
  {
    TurnLeft();
  }
}



void MoveForward()
{
   analogWrite(EN1,SpeedUP);
   analogWrite(EN2,SpeedUP);
}

void TurnRight()
{
   analogWrite(EN1,0);
   analogWrite(EN2,SpeedUP);
}

void TurnLeft()
{
    analogWrite(EN2,0);
    analogWrite(EN1,SpeedUP);
}

void Stop()
{
    analogWrite(EN1,0);
    analogWrite(EN2,0);
}
