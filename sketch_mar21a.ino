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
  int output[8];
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  tmpinput = map(analogRead(input), 0, 1023, 0, 255);
  Serial.println(tmpinput);
  output[7] = bitRead(tmpinput, 7);
  output[6] = bitRead(tmpinput, 6);
  output[5] = bitRead(tmpinput, 5);
  output[4] = bitRead(tmpinput, 4);
  output[3] = bitRead(tmpinput, 3);
  output[2] = bitRead(tmpinput, 2);
  output[1] = bitRead(tmpinput, 1);
  output[0] = bitRead(tmpinput, 0);
  digitalWrite(bit7,output[7]);
  digitalWrite(bit6,output[6]);
  digitalWrite(bit5,output[5]);
  digitalWrite(bit4,output[4]);
  digitalWrite(bit3,output[3]);
  digitalWrite(bit2,output[2]);
  digitalWrite(bit1,output[1]);
  digitalWrite(bit0,output[0]);
  delay(0.1);
}
