#include <stdio.h>

int sum(void);

void main()
{
  int s;
  s=sum();
  printf("%d",s);
  
}

int sum()
{
  int a,b,sum=0;
  scanf("%d %d",&a,&b);
  sum=a+b;
  return sum; //return sum,a; then will return a only
}
