#define PIN_A 13
#define PIN_B 12
#define PIN_C 7
#define PIN_D 9
#define PIN_E 8
#define PIN_F 11
#define PIN_G 10


void setup()
{
pinMode(PIN_A, OUTPUT);
pinMode(PIN_B, OUTPUT);
pinMode(PIN_C, OUTPUT);
pinMode(PIN_D, OUTPUT);
pinMode(PIN_E, OUTPUT);
pinMode(PIN_F, OUTPUT);
pinMode(PIN_G, OUTPUT);
  
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
