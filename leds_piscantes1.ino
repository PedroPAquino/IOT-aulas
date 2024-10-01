// C++ code
//
// Definindo os pinos dos LEDs
int ledVermelho1 = 1;
int ledVermelho2 = 2;
int ledVerde1 = 3;
int ledVerde2 = 4;
int ledAzul1 = 5;
int ledAzul2 = 6;

void setup() {
  // Configurando os pinos dos LEDs como saída
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
}

void loop() {
  // Primeiro Momento: 1 LED Verde, 1 Vermelho, 1 Azul
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledAzul1, HIGH);
  delay(5000);  // Mantém ligado por 2 segundos

  // Desliga todos os LEDs antes do próximo momento
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledAzul1, LOW);
  delay(1000);  // Pausa rápida

  // Segundo Momento: 2 LEDs Verdes, 2 Azuis
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledAzul1, HIGH);
  digitalWrite(ledAzul2, HIGH);
  delay(5000);  // Mantém ligado por 2 segundos

  // Desliga todos os LEDs antes do próximo momento
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAzul1, LOW);
  digitalWrite(ledAzul2, LOW);
  delay(1000);  // Pausa rápida

  // Terceiro Momento: 1 LED Verde, 2 Vermelhos, 1 Azul
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  digitalWrite(ledAzul1, HIGH);
  delay(5000);  // Mantém ligado por 2 segundos

  // Desliga todos os LEDs antes de reiniciar o loop
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledAzul1, LOW);
  delay(1000);  // Pausa rápida
}
