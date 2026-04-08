void setup() {
analogRead(A0);
Serial.begin(9600);
}

void loop() {
// now continiously we have to read the values so we have to write our further code in void loop
int val =analogRead(A0);
// gas sensor is connected at A0 position so we are using the analog function at A0 position and 
// what ever the value is getting stored in this val variable we are printing that in our
// serial monitor
Serial.println(val);
delay(1000);
}
