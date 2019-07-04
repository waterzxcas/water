void setup()
{
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int in;
  if(Serial.available()>0)
  {
    in=Serial.read()-'0';
    if(in==1)
    {
      digitalWrite(7,HIGH);
    }
    else if(in==2)
    {
      digitalWrite(8,HIGH);
    }
    else if(in==3)
    {
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
    }
    else if(in==4)
    {
      digitalWrite(9,HIGH);
    }
    else if(in==5)
    {
      digitalWrite(7,HIGH);
      digitalWrite(9,HIGH);
    }
    else if(in==6)
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
    }
    else if(in==7)
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(7,HIGH);
    }
    else if(in==8)
    {
      digitalWrite(10,HIGH);
    }
    else if(in==9)
    {
      digitalWrite(10,HIGH);
      digitalWrite(7,HIGH);
    }
  }
}
