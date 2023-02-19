int vib = 5;
int vib2 = 6;
int vib3 = 3;
int mic = A0;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(mic);
  delay(100);

  Serial.println(val);
  analogWrite(vib, val);
  analogWrite(vib2, val);
  analogWrite(vib3, val);
  delay(50);
}
