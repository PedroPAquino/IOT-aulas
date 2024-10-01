// C++ code
//
int sensorPIR = 3;
int buzzer = 5;
int led = 2;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(sensorPIR,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
 int detectarPresenca = digitalRead(sensorPIR);
  if(detectarPresenca == 1){
    tone(buzzer,264);
    digitalWrite(led,HIGH);
    
  }else{
    noTone(buzzer);
    digitalWrite(led,LOW);
  }
}