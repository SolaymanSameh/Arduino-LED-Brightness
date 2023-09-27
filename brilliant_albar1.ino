const int led = 3;
const int on = HIGH;
const int off = LOW;
int ledDecrement = 255;
int ledIncrement = 0;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  ledDecrement = 255;
  for(int i=255; i>0; i-=5)
  {
    analogWrite(led, ledDecrement);
    delay(40);
    ledDecrement-=5;
  }
  ledIncrement = 0;
  for(int i1=0; i1<255; i1+=5)
  {
    analogWrite(led, ledIncrement);
    delay(25);
    ledIncrement+=5;
  }
  delay(200);
}