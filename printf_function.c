/*#include<stdio.h>
void main()
{
    int a,b,sum;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("a=%-04d\tb=%-04d\tsum=%-04d",a,b,sum);
}*/
#include<stdio.h>
void main()
{
    char a;
    printf("Enter a number ");
    scanf("%c",&a);
    printf("a=%11.2c",a);
}
