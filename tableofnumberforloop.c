#include<stdio.h>
int main()
{
    int num,i,multi;
    printf("Enter The Number, That You Want as a Table: ");
    scanf("%d",&num);

    for(i=1;i<=12;i++)
    {
        multi=num*i;
        printf("\n%d x %d =  %d",multi,num,i);
    }
}
