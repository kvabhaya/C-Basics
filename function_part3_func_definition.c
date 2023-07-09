#include <stdio.h>
void sum(int,int);//function decleration
void main() //calling function
{
  sum(5,7);
}
void sum(int a,int b) //called function
{
    int sum1=0;
    sum1 = a+b;
    printf("%d",sum1);
}
