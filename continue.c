#include<stdio.h>

void main()
{
    int i,a,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a);
        if(a<0)
        {
            printf("\n\nYou Entered a Negative Number, Please Enter a Positive Number");
            continue;
        }
        sum=sum+a;
    }
    printf("%d",sum);
}
