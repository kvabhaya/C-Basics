#include<stdio.h>
void main()
{
    int a[5],i;
    float sum=0,avg;
    /*for (i=0;i<5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a[i]);
    }
    printf("--------------------------------------\n");
    for (i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }*/
    /*for (i=0;i<5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a[i]);
    }
    printf("--------------------------------------\n");
    for (i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }*/
    for (i=0;i<5;i++)
    {
        printf("Enter student's mark: ");
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/5;
    }
    printf("--------------------------------------\n");
    for (i=0;i<5;i++)
    {
        printf("You entered mark is %d\n",a[i]);
    }
    printf("--------------------------------------\n");
    printf("\nCalculated sum is: %f",sum);
    printf("\n\n--------------------------------------\n");
    printf("\nCalculated avg is: %f",avg);
    printf("\n\n--------------------------------------\n");

}
