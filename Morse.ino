#include <Morse.h>

#include <Morse.h>
 
Morse morse(13);
 
void setup()
{
}
 
void loop()
{
  morse.dot(); morse.dot(); morse.dot();
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse.dot();
  delay(3000);
}
void s(char c)
{
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
}
int main()
{
  setup();
  char a[100]={};
  {
    int i;
    for(i=0;i<100;i++)
    {
      scanf("%c",&a[i]);
      if(int(a[i])>=97&&int(a[i])<=128&&int(a[i])==32&&int(a[i])==13)
      {
        continue;
      }
      else
      {
        break;
      }
    }
    for(i=0;i<100;i++)
    {
      s(a[i]);
    }
  }
}
