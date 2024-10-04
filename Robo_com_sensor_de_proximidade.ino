//inclusão da biblioteca do servo motor
#include <Servo.h>

// Criação das variáveis dos pinos
int servo =4;
int led = 2;
//Variáveis para calcular a duarcao e a distância 
long duracao;

// Criação do objeto para o servo motor
Servo corpoServo;

// metodo para capturar a distância
long distancia(int trigger, int echo){
  // trigger porta de saída
  pinMode(trigger,OUTPUT);
  digitalWrite(trigger,LOW);
  delay(5); // espere 5 milisegundos
  
  digitalWrite(trigger,HIGH);
  delay(10);//espere 10 milisegundos
  digitalWrite(trigger,LOW);
  // echo porta de entrada
  pinMode(echo,INPUT);
  
  return pulseIn(echo,HIGH);
}

void setup() {
  // definição dos dispositivos como entrada e saída

  pinMode(led,OUTPUT);
  corpoServo.attach(servo);
  corpoServo.write(0);
}

void loop() {
 
int cm = 0.01723 * distancia(8,7); 

  if (cm < 20) {
    digitalWrite(led, HIGH);
    delay(1000);
    corpoServo.write(90); 
    delay(1000);
    
    
  } 
}
