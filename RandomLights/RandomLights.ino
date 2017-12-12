int LED[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10};
int randon = 0; // delay between each LED
int randoff = 0;
int RANDOM;
int num_pins = 9; // number of pins
int i;

void setup()
{
  
  for (i = 0; i < num_pins; i++)
    pinMode(LED[i], OUTPUT);
  
}

void loop()
{
  randon = random (500, 1200);
  randoff = random (100, 500);
  
  RANDOM = random(2, 9);

  digitalWrite(LED[RANDOM], HIGH);
  delay(randon);

  digitalWrite(LED[RANDOM], LOW);
  delay(randoff);
  
}

