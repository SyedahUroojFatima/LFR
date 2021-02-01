int left_sensor=2;
int right_sensor=3;
int left_motorforward=4;
int right_motorforward=5;

void setup() {
  pinMode(left_sensor,INPUT);
  pinMode(right_sensor,INPUT);
  pinMode(left_motorforward,OUTPUT);
  pinMode(right_motorforward,OUTPUT);
}

void loop() {
 if( digitalRead(left_sensor<500) && (right_sensor<500)) //forward
 {
  digitalWrite(left_motorforward,255);
  digitalWrite(right_motorforward,255);
 } 
 else if( digitalRead(left_sensor<500) && (right_sensor>500)) //RIGHT
 {
  digitalWrite(left_motorforward,255); 
  digitalWrite(right_motorforward,0);
 }
else if( digitalRead(left_sensor>500) && (right_sensor<500)) //LEFT
 {
  digitalWrite(left_motorforward,0); 
  digitalWrite(right_motorforward,255);
 }
  else //STOP
{
  digitalWrite(left_motorforward,0);
  digitalWrite(right_motorforward,0);
}
}
