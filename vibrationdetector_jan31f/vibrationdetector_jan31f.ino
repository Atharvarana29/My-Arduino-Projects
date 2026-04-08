void setup() {
pinMode(4,OUTPUT);
// LED output
pinMode(5,INPUT);
// vibration module value input
}

void loop() {
while(digitalRead(5)==LOW)
{
  digitalWrite(4,LOW);
}
digitalWrite(4,HIGH);
delay(1000);

}
