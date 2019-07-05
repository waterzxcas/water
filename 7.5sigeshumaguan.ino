void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int in;
  int c=11;
  if(Serial.available()>0)
  {
    while(c>=8)
    {
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);  
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      in=Serial.read()-'0';
        if(in==1)
      {  
        digitalWrite(3,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==2)
      {
        digitalWrite(4,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==3)
      {
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);  
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==4)
      {
        digitalWrite(5,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==5)
      {
        digitalWrite(3,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==6)
      {
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==7)
      {
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(3,HIGH);    
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==8)
      {
        digitalWrite(6,HIGH);  
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
      else if(in==9)
      {
        digitalWrite(6,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(c-1,LOW); 
        c=c-1;
      }
    }
  }
}
