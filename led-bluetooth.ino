char incoming_value = 0;
int redLED = 8;


void setup() {
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);

}

void loop() {

  if (Serial.available() > 0) {

    incoming_value = Serial.read();
    Serial.print(incoming_value);
    if (incoming_value == '1')
      digitalWrite(redLED, HIGH);
    else if (incoming_value == '0')
      digitalWrite(redLED, LOW);
  }

}
