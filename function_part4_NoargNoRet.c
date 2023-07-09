#include <stdio.h>
//No Argument No Return Type
void sum(void);
void sub(void);
void mul(void);
void div(void);

void main()
{
  sum();
  printf("\n");
  sub();
  printf("\n");
  mul();
  printf("\n");
  div();
  printf("\n");
}

void sum()
{
  int a,b;
  printf("Enter two values : ");
  scanf("%d %d",&a,&b);
  printf("Sum is : %d",a+b);
}

void sub()
{
  int a,b;
  printf("Enter two values : ");
  scanf("%d %d",&a,&b);
  printf("Sub is : %d",a-b);
}

void mul()
{
  int a,b;
  printf("Enter two values : ");
  scanf("%d %d",&a,&b);
  printf("Mul is : %d",a*b);
}

void div()
{
  int a,b;
  printf("Enter two values : ");
  scanf("%d %d",&a,&b);
  printf("Div is : %d",a/b);
}
