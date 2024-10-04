// Bibliotecas do servoMotor
#include <Servo.h>
/*criando objeto do tipo Servo Motor para poder usar as 
funções de controle do equipamento*/

Servo objetoservo;
// Variável para salvar a porta que o servo esta

int servo = 2;
int botao = 4;
int botaovoltar = 7;
int posicao = 0;
void setup()
{
 // inicialização do servo
 objetoservo.attach(servo);
 // Servo começa na posição 0
 objetoservo.write(0);
 // define botão como entrada
 pinMode(botao,INPUT);
 pinMode(botaovoltar,INPUT);
 
}

void loop()
{
  //Se precionar o botão, gire o servo a 1º
  if(digitalRead(botao)==HIGH && posicao<180){
    posicao = posicao+15;
   // Mande o motor para a nova posição
   	objetoservo.write(posicao);
   // Aguarde 1 seundo para a próxima leitura
    delay(1000);
  }//Diminui 1º de posiçao
  if(digitalRead(botaovoltar)==HIGH && posicao>0){
    posicao = posicao-15;
   // Mande o motor para a nova posição
   	objetoservo.write(posicao);
   // Aguarde 1 segundo para a próxima leitura
    delay(1000);
  }
