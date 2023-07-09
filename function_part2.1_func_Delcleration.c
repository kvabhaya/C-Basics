#include <stdio.h>
void summ();//function decleration 

void main()
{
  summ();
}

void summ()
{
  int i,sum=0;
  char array[]={'K','A','M','A','L'};
  for (i=0;i<5;i++)
    {
      sum=sum+array[i];
    }
  printf("%d",sum);
}
