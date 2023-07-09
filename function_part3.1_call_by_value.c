#include <stdio.h>
void fun(int,int);

void main()
{
  int x=5,y=7;
  fun(x,y);
  printf("\nx=%d  y=%d\n",x,y);
}
void fun(int x,int y)              //void fun(int a,int b)
{
  x=7;                             //a=7;
  y=5;                             //b=5;
  printf("\nx=%d  y=%d\n",x,y);    //printf("\nx=%d  y=%d\n",a,b); 
  
}
