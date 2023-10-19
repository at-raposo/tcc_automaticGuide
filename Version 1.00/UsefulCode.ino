// Define os pinos para o sensor ultrassônico
#define trigPin 12
#define echoPin 11

// Define o pino para o módulo de vibração
#define vibrationPin 9

void setup() {
  // Inicialize o pino do módulo de vibração como saída
  pinMode(vibrationPin, OUTPUT);
  // Inicialize o pino do trigger como saída e o pino do echo como entrada
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // Inicialize a comunicação serial para depuração
  Serial.begin(9600);
}

void loop() {
  // Gere um pulso no pino de trigger para acionar o sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leitura da duração do pulso de eco
  long duration = pulseIn(echoPin, HIGH);

  // Calcule a distância em centímetros
  float distance = (duration / 2) / 29.1;

  // Imprima a distância no monitor serial para fins de depuração
  Serial.print("Distância: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 80) {
    // Determine a frequência da vibração com base na distância lida
    int vibrationFrequency = map(distance, 5, 80, 200, 2000); // Mapeie a distância para a frequência
        Serial.print("Distância: ");
    Serial.print(distance);
    Serial.print(" cm, Frequência de Vibração: ");
    Serial.println(vibrationFrequency);

    // Ative o módulo de vibração
    analogWrite(vibrationPin, vibrationFrequency);
  } else {
    // Se a distância for maior que 80 cm, desligue o módulo de vibração
    analogWrite(vibrationPin, 0);
    Serial.println("Fora do intervalo de medição.");
  }

  // Aguarde um curto período de tempo
  delay(100);
}

