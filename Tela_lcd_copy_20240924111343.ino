// biblioteca do lcd
#include <LiquidCrystal.h>
//criar variável do lcd
LiquidCrystal lcd (2,3,4,9,10,11,12);

int ledLcd =13;

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
void setup()
{
  pinMode(ledLcd,OUTPUT);// Definir LedLcd saída
  digitalWrite(ledLcd, HIGH); //ligar os LEDs do lcd
  lcd.begin(16,2); //informar que o lcd tem 16 colunas e 2 linhas
  lcd.clear(); //iniciar o lcd limpo
}

void loop()
{
 //transformar o valor recebido para cientímetros
 int cm = 0.01723 * distancia(7, 8); 
  
  if(cm<100){//se menor que 1 metro/100 com
    lcd.setCursor(0,0); // iniciar a escrita na linha 0 coluna 0
 	lcd.print("MANTENHA");
 	lcd.setCursor(0,1); // iniciar a escrita na linha 0 coluna 1
 	lcd.print("DISTANCIA!");
  }
  else{
    lcd.clear();//apague todas as mensagens do display
  }
  
 
}