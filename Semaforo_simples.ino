// C++ code
//
int ledVermelho = 1;
int ledAmarelo = 2;
int ledVerde = 3;

void setup()
{
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
}

void loop()
{ // ligar o led vermelho
  digitalWrite(ledVerde,LOW);//desligar verde
  digitalWrite(ledVermelho,HIGH);//ligar vermelho
  digitalWrite(ledAmarelo,LOW);//desligar amarelo
  delay(5000); //espera 5 segundos
  
  //ligar o led amarelo
  digitalWrite(ledVermelho,LOW);//desligar vermelho
  digitalWrite(ledAmarelo,HIGH);//ligar amarelo
  digitalWrite(ledVerde,LOW);//desligar verde
  delay(5000); //espera 5 segundos
  
  //ligar o verde
  digitalWrite(ledVermelho,LOW);//desligar vermelho
  digitalWrite(ledAmarelo,LOW);//desligar amarelo
  digitalWrite(ledVerde,HIGH);//ligar verde
  delay(5000); //espera 5 segundos
  
 
}