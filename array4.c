#include<stdio.h>
void main()
{
    int a[5],b[5],i,c[i];
    for(i=0;i<5;i++)
    {
        printf("A Number of first array: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Entered Number of first array: %d\n",a[i]);
    }
    printf("\n\n--------------------------------------------------\n\n");

    for(i=0;i<5;i++)
    {
        printf("A Number of second array: ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Entered Number of second array: %d\n",b[i]);
    }
    printf("\n\n--------------------------------------------------\n\n");

    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf("Addition of first and second array is: %d\n",c[i]);
    }

}
