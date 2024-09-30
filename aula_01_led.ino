// C++ code

// variável para capturar a porta de conexão do led
int led = 4;

void setup()//configuração inicial
{
  // defininir configurações do led INPUT (entrada) OUTPUT (saída)
  pinMode(led,OUTPUT);//defini o led como saída
  /*fução de definição de entrada/saída do equipamento
  receber dois parâmetros:
  (porta que o dispositivo está conectado, OUTPUT)
  */
}
// função de execução de instruções infinitas/loop
void loop()
{
  // ligar o led usa-se (HIGH)
  digitalWrite(led,HIGH);
  // adicionar pausa
  delay(2000); // espera 2 segundos com led ligado
  // desligar o led, usa-se (LOW)
  digitalWrite(led,LOW);
  delay(2000); // espera 2 segundos com led desligado
}