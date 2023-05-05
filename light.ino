int sensorValue = 0;
int ledDimming = 0;
int pwmPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(pwmPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);
  Serial.print("PhotoResistor read = ");
  Serial.print(sensorValue);
  if (ledDimming < 0) ledDimming=0;

  Serial.print(",  ledDimming value = 0 ");
  Serial.println(ledDimming);
  analogWrite(pwmPin, ledDimming);
  delay(100);
}
