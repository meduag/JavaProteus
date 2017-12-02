#define Led 13

char dataIn = "";

void setup() {
  Serial.begin(9600);

  pinMode(Led, OUTPUT);
  digitalWrite(Led, LOW);
}

void loop() {
  if (Serial.available()) {
    dataIn = Serial.read();

    if (dataIn == '1') {
      digitalWrite(Led, HIGH);
    }

    if (dataIn == '0') {
      digitalWrite(Led, LOW);
    }

  }//fin if
}
