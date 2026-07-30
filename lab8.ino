#define GreenLed 13
#define Sensor A0

int mq5Pin = A0;

void setup() {
  pinMode(GreenLed, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(Sensor, INPUT);
  Serial.begin(9600);
}

void loop() {

  int value = analogRead(Sensor);

  Serial.print("MQ5 Sensor Value: ");
  Serial.println(value);

  if (value > 600) {
    digitalWrite(GreenLed, HIGH);
  } else {
    digitalWrite(GreenLed, LOW);
  }

  delay(1000);
}