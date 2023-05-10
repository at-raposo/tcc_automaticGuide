int trigPin = 13; // pino do trigger do sensor ultrassônico
int echoPin = 12; // pino do echo do sensor ultrassônico
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


void setup() {
  pinMode(trigPin, OUTPUT); //pino Trig do Sensor Ultrassônico é saída
  pinMode(echoPin, INPUT); //pino Echo do Sensor Ultrassônico é Entrada
  pinMode(vibPin, OUTPUT); //Motor de Vibração é Saída
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print(distance);
  Serial.println(" cm");
  if (distance >= 5) {
    digitalWrite(vibPin, vib5);
    delay(100);
  } if(distance >= 20) {
    digitalWrite(vibPin, vib75);
    delay(100);
  } 
  delay(100);
}
