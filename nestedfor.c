#include<stdio.h>
void main()
{
    int i,j;
    /*for(j=1;j<=10;j++)
    {
        for(i=1;i<=5;i++)
        {
            printf("* ");
        }
        printf("\n");
    }*/

    for(i=10;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }
}
