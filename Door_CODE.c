#include<reg51.h>
sbit i=P1^4;
sbit a=P1^1;
sbit b=P1^3;
void delay(void)
{
  int i,j;
  for(i=0;i<1000;i++)
  {
    for(j=0;j<1000;j++);
  }
}
int main()
{
  while(1)
  {
    if(i==1)
    {
      a=1;
      b=0;
      delay();
      a=0;
      b=1;
      delay();
    }
    else
    {
      a=b=0;
    }
}
}

