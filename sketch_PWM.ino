  int input = A0;
  int tmpinput;
  int PWM = 8;
  int tmp;
void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(38400);
}

void loop() {
  tmp = analogRead(input);
  tmpinput = map(tmp, 0, 1023, 0, 255);
  analogWrite(PWM,tmpinput);
  Serial.println(tmpinput);
  tmpinput = 0;
}
