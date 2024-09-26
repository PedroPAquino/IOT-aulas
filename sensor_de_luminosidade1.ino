// C++ code
//
int led =3;
int sensor_lumi = A0;
// variável para capturar a luminosidade
int luz = 0;

void setup()
{
 //led é de saída
 pinMode(led,OUTPUT);
  // sensor é de entrada
 pinMode(sensor_lumi,INPUT);
}

void loop()
{
 // Capturar o que o sensor leu no ambiente
 //analogRead é usado para leitura analógica
 luz = analogRead(sensor_lumi);
 /* as portas analogicas capturam dados que variam
 de 0 até 1023 */
  
  if(luz<500){
    //gitalWrite(led,HIGH);
    analogWrite(led,1023);
  }
  if(luz>500 & luz<900){
    analogWrite(led,500);
  }
  else{
    //digitalWrite(led,LOW);
    analogWrite(led,0);
  }
}