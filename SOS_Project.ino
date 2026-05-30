void setup() {
  // put your setup code here, to run once:

  int onboardLED = 13;

  pinMode(onboardLED, OUTPUT);

  for (int i = 0; i < 3; i++) {
  digitalWrite(onboardLED, HIGH);
  delay(500);
  digitalWrite(onboardLED, LOW);
  delay(500);
  }

  for (int i = 0; i < 3; i++) {
    digitalWrite(onboardLED, HIGH);
    delay(1000);
    digitalWrite(onboardLED, LOW);
    delay(1000);
  }

   for (int i = 0; i < 3; i++) {
  digitalWrite(onboardLED, HIGH);
  delay(500);
  digitalWrite(onboardLED, LOW);
  delay(500);
   }
   
}

void loop() {
  // put your main code here, to run repeatedly:

}
