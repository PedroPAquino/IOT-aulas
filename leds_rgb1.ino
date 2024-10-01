// C++ code
//
 int R  = 6;//porta vermelha 01
 int G = 3;//porta verde 01
 int B = 5;//porta azul 01
 int R2 = 11;//porta vermelha 02
 int G2 = 9;//porta verde 02
 int B2 = 10;//porta azul 02

void setup()
{
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  
  pinMode(R2,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(B2,OUTPUT);
}

void loop()
{
  //geração de números aleatórios
  int v1= random(0,255);
  int v2= random(0,255);
  int v3= random(0,255);
  int v4= random(0,255);
  int v5= random(0,255);
  int v6= random(0,255);
  
  analogWrite(R,v1);
  analogWrite(G,v2);
  analogWrite(B,v3);
  delay(50);
  
  analogWrite(R2,v4);
  analogWrite(G2,v5);
  analogWrite(B2,v6);
  delay(50);
  
  /*analogWrite(R,200);
  analogWrite(G,87);
  analogWrite(B,128);
  delay(5000);*/
  
}