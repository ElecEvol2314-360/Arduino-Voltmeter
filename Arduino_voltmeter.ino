#define Volt_Range   9                    // Set the range of the Input voltage.
#define Probe        A0                    //Analog pin to be set as the '+' Probe.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(Probe);
  value = map(value, 0, 1023, 0, Volt_Range);
  Serial.println(value);
  delay(15);
}
