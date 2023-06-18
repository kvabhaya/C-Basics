#include <stdio.h>
void main ()
{
  int num,i,m;
  printf("Enter a Number : ");
  scanf("%d",&num);

  for(i=0;i<101;i++)
  {
    m=num*i;
    printf("%d * %d = %d\n",num,i,m);
  }
}
