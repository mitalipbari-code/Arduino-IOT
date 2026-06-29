int buzz=2;
int switchop=12;
void setup()
{
  Serial.begin(9600);
  pinMode(buzz,OUTPUT);
  pinMode(switchop,INPUT);
}
void loop() 
{
  int value=digitalRead(switchop);
  if(value==1)
  {
    tone(buzz, 240); // Sa
  delay(400);

  tone(buzz, 270); // Re
  delay(400);

  tone(buzz, 300); // Ga
  delay(400);

  tone(buzz, 320); // Ma
  delay(400);

  tone(buzz, 360); // Pa
  delay(400);

  tone(buzz, 400); // Dha
  delay(400);

  tone(buzz, 450); // Ni
  delay(400);

  tone(buzz, 480); // High Sa
  delay(400);

  }
  else
  {
    noTone(buzz);
  }
}