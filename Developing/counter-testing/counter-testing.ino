int button = 6;


void setup() {
  pinMode(button, INPUT);
  Serial.begin(9600);

}

void loop() {
  if(digitalRead(button) == 1)
Serial.println(digitalRead(button));

}
