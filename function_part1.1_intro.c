#include <stdio.h>

void sub()
{
  int a,b;
  printf("\nEnter 2 Numbers : ");
  scanf("%d %d",&a,&b);
  printf("\nSub is %d",a-b);
}

void sum()
{
  int m,n;
  printf("\nEnter two Numbers : ");
  scanf("%d %d",&m,&n);
  printf("\nSum is %d",m+n);
  sub();
}
void main()
{
  sum();
}
