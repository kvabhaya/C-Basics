#include <stdio.h>
void main ()
{
  int x,y,z,max;
  printf("Enter First Number: ");
  scanf("%d",&x);
  printf("Enter Second number: ");
  scanf("%d",&y);
  printf("Enter Third number: ");
  scanf("%d",&z);

  if((x>y) && (x>z))
    max=x;
  else if((y>x) && (y>z))
    max=y;
  else
    max=z;

  printf("%d",max);
}
