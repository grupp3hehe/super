  int input = A7;
  int brus = A0;
  int tmpinput;
  int bit7 = 2;
  int bit6 = 3;
  int bit5 = 4;
  int bit4 = 5;
  int bit3 = 6;
  int bit2 = 7;
  int bit1 = 8;
  int bit0 = 9;
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  tmpinput = map(analogRead(input), 0, 1023, 0, 255);
  Serial.println(tmpinput);
  digitalWrite(bit7,bitRead(tmpinput, 7));
  digitalWrite(bit6,bitRead(tmpinput, 6));
  digitalWrite(bit5,bitRead(tmpinput, 5));
  digitalWrite(bit4,bitRead(tmpinput, 4));
  digitalWrite(bit3,bitRead(tmpinput, 3));
  digitalWrite(bit2,bitRead(tmpinput, 2));
  digitalWrite(bit1,bitRead(tmpinput, 1));
  digitalWrite(bit0,bitRead(tmpinput, 0));
}
