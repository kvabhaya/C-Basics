#include<stdio.h>
void main()
{
    int i,a[5],even_count=0,odd_count=0;
    for(i=0;i<5;i++)
    {
        printf("Enter an Integer: ");
        scanf("%d",&a[i]);
        if (a[i]%2==0)
            even_count=even_count+1;
        else
            odd_count=odd_count+1;
    }
    for(i=0;i<5;i++)
    {
        printf("Entered Integer: %d\n",a[i]);
    }

    printf("\nEven Count is: %d",even_count);
    printf("\nOdd Count is: %d",odd_count);


}
