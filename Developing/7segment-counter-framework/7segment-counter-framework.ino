#define PIN_A 13
#define PIN_B 12
#define PIN_C 7
#define PIN_D 9
#define PIN_E 8
#define PIN_F 11
#define PIN_G 10

const int button = 6;
int number = 0;



void displayprint() {
  switch (number) {

    case 0:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, LOW);
      digitalWrite(PIN_E, LOW);
      digitalWrite(PIN_F, LOW);
      digitalWrite(PIN_G, HIGH);
      break;

    case 1:
      digitalWrite(PIN_A, HIGH);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, HIGH);
      digitalWrite(PIN_E, HIGH);
      digitalWrite(PIN_F, HIGH);
      digitalWrite(PIN_G, HIGH);
      break;

    case 2:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, HIGH);
      digitalWrite(PIN_D, LOW);
      digitalWrite(PIN_E, LOW);
      digitalWrite(PIN_F, HIGH);
      digitalWrite(PIN_G, LOW);
      break;

    case 3:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, LOW);
      digitalWrite(PIN_E, HIGH);
      digitalWrite(PIN_F, HIGH);
      digitalWrite(PIN_G, LOW);
      break;

    case 4:
      digitalWrite(PIN_A, HIGH);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, HIGH);
      digitalWrite(PIN_E, HIGH);
      digitalWrite(PIN_F, LOW);
      digitalWrite(PIN_G, LOW);
      break;

    case 5:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, HIGH);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, LOW);
      digitalWrite(PIN_E, HIGH);
      digitalWrite(PIN_F, LOW);
      digitalWrite(PIN_G, LOW);
      break;

    case 6:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, HIGH);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, LOW);
      digitalWrite(PIN_E, LOW);
      digitalWrite(PIN_F, LOW);
      digitalWrite(PIN_G, LOW);
      break;

    case 7:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, HIGH);
      digitalWrite(PIN_E, HIGH);
      digitalWrite(PIN_F, HIGH);
      digitalWrite(PIN_G, HIGH);
      break;

    case 8:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, LOW);
      digitalWrite(PIN_E, LOW);
      digitalWrite(PIN_F, LOW);
      digitalWrite(PIN_G, LOW);
      break;

    case 9:
      digitalWrite(PIN_A, LOW);
      digitalWrite(PIN_B, LOW);
      digitalWrite(PIN_C, LOW);
      digitalWrite(PIN_D, LOW);
      digitalWrite(PIN_E, HIGH);
      digitalWrite(PIN_F, LOW);
      digitalWrite(PIN_G, LOW);
      break;
  }
}

void setup()
{
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  pinMode(PIN_D, OUTPUT);
  pinMode(PIN_E, OUTPUT);
  pinMode(PIN_F, OUTPUT);
  pinMode(PIN_G, OUTPUT);

  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  digitalWrite(PIN_E, LOW);
  digitalWrite(PIN_F, LOW);

  pinMode(button, INPUT);
}

void loop()
{
  
  displayprint();
  delay(500);
  number = 3;
  delay(500);
  number = 0;
}
