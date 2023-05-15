int trigPin = 11; // pino do trigger(gatilho de disparo de pulso do sensor ultrassônico
int echoPin = 10; // pino do echo(pino de leitura do tempo de resposta) do sensor ultrassônico
int vibPin = 6; // pino do sensor de vibração
int vib5 = 400; // 5cm vibra em uma frequência de 400
int vib10 = 390;// 10cm vibra em uma frequência de 390
int vib15 = 380; // 15cm vibra em uma frequência de 380
int vib20 = 370;// 20cm vibra em uma frequência de 370
int vib25 = 360;// 25cm vibra em uma frequência de 360
int vib30 = 350;// 30cm vibra em uma frequência de 350
int vib35 = 340;// 35cm vibra em uma frequência de 340
int vib40 = 330;// 40cm vibra em uma frequência de 330
int vib45 = 320;// 45cm vibra em uma frequência de 320
int vib50 = 310;// 5cm vibra em uma frequência de 310
int vib55 = 200;// 55cm vibra em uma frequência de 200
int vib60 = 290;// 60cm vibra em uma frequência de 290
int vib65 = 280;// 65cm vibra em uma frequência de 280
int vib70 = 270;// 70cm vibra em uma frequência de 270
int vib75 = 260;// 75cm vibra em uma frequência de 260
int vib80 = 250;// 80cm vibra em uma frequência de 250
int vib0 = 0;// vibra em uma frequência de 0


void setup() {
  pinMode(trigPin, OUTPUT); //pino Trig do Sensor Ultrassônico é saída
  pinMode(echoPin, INPUT); //pino Echo do Sensor Ultrassônico é Entrada
  pinMode(6, OUTPUT); //Motor de Vibração é Saída
  Serial.begin(9600);
}

void loop() {
  long duration, distance; // long é um int que contém um armazenamento maior (de 32 bits ou seja 4 bytes)
 
  // nesse bloco o pulso vai ser lançando e detectado a distância do lançamento em 0,5segundo
  analogWrite(trigPin, LOW);
  delayMicroseconds(500);
  analogWrite(trigPin, LOW);
  delayMicroseconds(500);
  analogWrite(trigPin, HIGH);
  duration = pulseIn(echoPin, HIGH);
  
  // nesse bloco fica visível a parte os centímetros que está sendo medido
  distance = duration * 0.034 / 2;
  Serial.print(distance);
  Serial.println(" cm");
  
  //nesse bloco o motor de vibração e o sensor ultrâssonico começam a atuar juntos
  
  if (distance <= 5) { // se a distância for igual ou menor que 5
    digitalWrite(6, vib5); //vibrar na frequência de 400
    delay(100); //espera segundos para detectar novamente a distância
    
  } 
  if(distance <= 10) { // se a distância for igual ou menor que 10
    digitalWrite(vibPin, vib10);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 15) { // se a distância for igual ou menor que 15
    digitalWrite(vibPin, vib15);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
  
   if(distance <= 20) { // se a distância for igual ou menor que 20
    digitalWrite(vibPin, vib20);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 25) { // se a distância for igual ou menor que 25
    digitalWrite(vibPin, vib75);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 30) { // se a distância for igual ou menor que 30
    digitalWrite(vibPin, vib30);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 35) { // se a distância for igual ou menor que 35
    digitalWrite(vibPin, vib35);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 40) { // se a distância for igual ou menor que 40
    digitalWrite(vibPin, vib40);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 45) {  // se a distância for igual ou menor que 45
    digitalWrite(vibPin, vib45);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 50) {  // se a distância for igual ou menor que 50
    digitalWrite(vibPin, vib50);//vibra conforme a frequência declarada
    delay(100); //espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 55) {  // se a distância for igual ou menor que 55
    digitalWrite(vibPin, vib55);//vibra conforme a frequência declarada
    delay(100); //espera 0,1 segundos para detectar novamente a distância
  } 
   if(distance <= 60) {  // se a distância for igual ou menor que 60
    digitalWrite(vibPin, vib60);//vibra conforme a frequência declarada
    delay(100); //espera 0,1 segundos para detectar novamente a distância
  }
  if(distance <= 65) {  // se a distância for igual ou menor que 65
   digitalWrite(vibPin, vib65);//vibra conforme a frequência declarada
   delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
  if(distance <= 70) {  // se a distância for igual ou menor que 70
    digitalWrite(vibPin, vib70);//vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } if(distance <= 75) {  // se a distância for igual ou menor que 75
    digitalWrite(vibPin, vib75); //vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
  if(distance <=80) {  // se a distância for igual ou menor que 80
    digitalWrite(vibPin, vib80); //vibra conforme a frequência declarada
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
    if(distance>80); {  // se a distância for maior que 80
    digitalWrite(vibPin, vib0); //não vibra
    delay(100);//espera 0,1 segundos para detectar novamente a distância
  } 
}
