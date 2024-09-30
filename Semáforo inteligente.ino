// Pinos dos LEDs para carros
int ledVerdeA = 2;
int ledAmareloA = 3;
int ledVermelhoA = 4;
int ledVerdeB = 5;
int ledAmareloB = 6;
int ledVermelhoB = 7;

// Pinos dos LEDs para pedestres
int ledVerdePedA = 8;
int ledVermelhoPedA = 9;
int ledVerdePedB = 10;
int ledVermelhoPedB = 11;

// Pinos do sensor de distância
int trigPin = 12;
int echoPin = 13;

// Tempo
int tempoPedestres = 15000; // 15 segundos

void setup() {
    // Inicializando pinos
    pinMode(ledVerdeA, OUTPUT);
    pinMode(ledAmareloA, OUTPUT);
    pinMode(ledVermelhoA, OUTPUT);
    pinMode(ledVerdeB, OUTPUT);
    pinMode(ledAmareloB, OUTPUT);
    pinMode(ledVermelhoB, OUTPUT);
    
    pinMode(ledVerdePedA, OUTPUT);
    pinMode(ledVermelhoPedA, OUTPUT);
    pinMode(ledVerdePedB, OUTPUT);
    pinMode(ledVermelhoPedB, OUTPUT);
    
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    
    // Semáforos de carros no verde
    digitalWrite(ledVerdeA, HIGH);
    digitalWrite(ledVerdeB, HIGH);
    digitalWrite(ledVermelhoA, LOW);
    digitalWrite(ledVermelhoB, LOW);
    digitalWrite(ledAmareloA, LOW);
    digitalWrite(ledAmareloB, LOW);
    
    // Semáforos de pedestres no vermelho
    digitalWrite(ledVermelhoPedA, HIGH);
    digitalWrite(ledVermelhoPedB, HIGH);
    digitalWrite(ledVerdePedA, LOW);
    digitalWrite(ledVerdePedB, LOW);
}

void loop() {
    long duracao, distancia;
    
    // Limpar o pino TRIG
    digitalWrite(trigPin, LOW);
    delay(2);
    
    // Acionar o sensor
    digitalWrite(trigPin, HIGH);
    delay(10);
    digitalWrite(trigPin, LOW);
    
    // Ler a duração do sinal de eco
    duracao = pulseIn(echoPin, HIGH);
    
    // Calcular a distância
    distancia = (duracao * 0.034) / 2; // em cm
    
    // Verifica se um pedestre está próximo
    if (distancia < 50) {
        // Apagar sinais verdes dos carros
        digitalWrite(ledVerdeA, LOW);
        digitalWrite(ledVerdeB, LOW);
        
        // Acender luz amarela por 3 segundos
        digitalWrite(ledAmareloA, HIGH);
        digitalWrite(ledAmareloB, HIGH);
        delay(3000); // Espera 3 segundos com a luz amarela acesa
        
        // Apagar luz amarela e acender luz vermelha dos carros
        digitalWrite(ledAmareloA, LOW);
        digitalWrite(ledAmareloB, LOW);
        digitalWrite(ledVermelhoA, HIGH);
        digitalWrite(ledVermelhoB, HIGH);
        
        // Acender sinais de pedestre
        digitalWrite(ledVerdePedA, HIGH);
        digitalWrite(ledVerdePedB, HIGH);
        digitalWrite(ledVermelhoPedA, LOW);
        digitalWrite(ledVermelhoPedB, LOW);
        
        delay(tempoPedestres); // Mantém o sinal de pedestre verde por 15 segundos
        
        // Sinais de pedestres ficam vermelhos
        digitalWrite(ledVerdePedA, LOW);
        digitalWrite(ledVerdePedB, LOW);
        digitalWrite(ledVermelhoPedA, HIGH);
        digitalWrite(ledVermelhoPedB, HIGH);
        
        // Semáforos de carros abrem novamente (luz verde)
        digitalWrite(ledVerdeA, HIGH);
        digitalWrite(ledVerdeB, HIGH);
        digitalWrite(ledVermelhoA, LOW);
        digitalWrite(ledVermelhoB, LOW);
    } else {
        // Se não houver pedestres, manter semáforos de carro no verde
        digitalWrite(ledVermelhoA, LOW);
        digitalWrite(ledVermelhoB, LOW);
        digitalWrite(ledVerdeA, HIGH);
        digitalWrite(ledVerdeB, HIGH);
    }
    
    delay(100); // Pequeno atraso para evitar leituras excessivas
}
