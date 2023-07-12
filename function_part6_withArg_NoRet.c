#include <stdio.h>

void sum(int,int);

void main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  sum(x,y);
}

void sum(int a,int b)
{
  int s;
  s=a+b;
  printf("%d",s);
}
