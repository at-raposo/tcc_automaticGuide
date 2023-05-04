int trigPin = 13; // pino do trigger do sensor ultrassônico
int echoPin = 12; // pino do echo do sensor ultrassônico
int vibPin = 6; // pino do sensor de vibração
int vib5 = 400; // 5cm vibra em uma frequência de 200
int vib10 = 190;
int vib15 = 180; // distância em cm para a vibração máxima
int vib20 = 170;
int vib25 = 160;
int vib30 = 150;
int vib35 = 140;
int vib40 = 130;
int vib45 = 120;
int vib50 = 110;
int vib55 = 100;
int vib60 = 90;
int vib65 = 80;
int vib70 = 70;
int vib75 = 60;
int vib80 = 50;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(vibPin, OUTPUT);
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
