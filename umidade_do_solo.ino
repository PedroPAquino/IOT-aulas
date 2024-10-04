// Biblioteca para conexão do sensor

// Variável do sensor
int sensor= A0;

void setup()
{
 //Definir o sensor como entrada
  pinMode(sensor,INPUT);
  //Utilizando o monitor serial
  Serial.begin(9600);
  
}

void loop()
{
 // Guardar o valor lido pelo sensor
  int umidade = analogRead(sensor);
  //rial.print("Umidade do solo ");
  //rial.println(umidade);
  //lay(1000);
  
  if(umidade>0 && umidade<=300){
    Serial.println("Solo Seco");
    delay(1000);
  }
  else if(umidade> 300 && umidade<=500){
    Serial.println("Solo ideal");
    delay(1000);
  }
  if(umidade> 500){
    Serial.println("Solo Umido");
    delay(1000);
  }
  
}
  