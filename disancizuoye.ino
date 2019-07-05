class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void space();
  private:
    int _pin;
};
Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(250);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(1000);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::space()
{
  digitalWrite(_pin,LOW);
  delay(250*3);
}
Morse morse(13);

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char c;
  while(Serial.available()>0)
  {
    c=Serial.read();
    if(c=='s')
    {
      morse.dot(); morse.dot(); morse.dot();
    }
    else if(c=='o')
    {
      morse.dash(); morse.dash(); morse.dash();
    }
    else if(c=='a')
    {
      morse.dot(); morse.dash();
    }
    else if(c=='b')
    {
      morse.dash(); morse.dot();morse.dot(); morse.dot();
    }
    else if(c=='c')
    {
       morse.dash(); morse.dot();morse.dash(); morse.dot();
    }
    else if(c=='d')
    {
      morse.dash(); morse.dot(); morse.dot();
    }
    else if(c=='e')
    {
      morse.dot();
    }
    else if(c=='f')
    {
      morse.dot();morse.dot();morse.dash();morse.dot();
    }
    else if(c=='g')
    {
      morse.dash();morse.dash();morse.dot();
    }
    else if(c=='h')
    {
      morse.dot();morse.dot();morse.dot();morse.dot();
    }
    else if(c=='i')
    {
      morse.dot();morse.dot();
    }
    else if(c=='j')
    {
      morse.dot();morse.dash();morse.dash();morse.dash();
    }
    else if(c=='k')
    {
      morse.dash();morse.dot();morse.dash();
    }
    else if(c=='l')
    {
      morse.dot();morse.dash();morse.dot();morse.dot();
    }
    else if(c=='m')
    {
      morse.dash();morse.dash();
    }
    else if(c=='n')
    {
      morse.dash();morse.dot();
    }
    else if(c=='p')
    {
      morse.dot();morse.dash();morse.dash();morse.dot();
    }
    else if(c=='q')
    {
      morse.dash();morse.dash();morse.dot();morse.dash();
    }
    else if(c=='r')
    {
      morse.dot();morse.dash();morse.dot();
    }
    else if(c=='t')
    {
      morse.dash();
    }
    else if(c=='u')
    {
      morse.dot();morse.dot();morse.dash();
    }
    else if(c=='v')
    {
      morse.dot();morse.dot();morse.dot();morse.dash();
    }
    else if(c=='w')
    {
      morse.dot();morse.dash();morse.dash();
    }
    else if(c=='x')
    {
      morse.dash();morse.dot();morse.dot();morse.dash();
    }
    else if(c=='y')
    {
      morse.dash();morse.dot();morse.dash();morse.dash();
    }
    else if(c=='z')
    {
      morse.dash();morse.dash();morse.dot();morse.dot();
    }
    else if(c==' ')
    {
      morse.space();;
    }
  }
}
