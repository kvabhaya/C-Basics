/*#include<stdio.h>
void main()
{
    int n,count=0;
    float num, average, sum=0.0;

    printf("Enter any number you want: ");
    scanf("%d",&n);


    while (count<n)
    {

        printf("num = ");
        scanf("%f",&num);
        sum+=num;
        count+=1;


    }
    average=sum/n;
    printf("\nAverage is: %f\n",average);

}


#include<stdio.h>
void main()
{
    int n,count=0;
    float num, average, sum=0.0;

    printf("Enter any number you want: ");
    scanf("%d",&n);

    do{
        printf("num = ");
        scanf("%f",&num);
        sum+=num;
        count+=1;
    }
    while (count<n);
    average=sum/n;
    printf("\nAverage is: %f\n",average);

}


#include<stdio.h>
void main()
{
    int n,count;
    float num, average, sum=0.0;

    printf("Enter any number you want: ");
    scanf("%d",&n);

    for (count=1;count<=n;count+=1)
    {
        printf("num = ");
        scanf("%f",&num);
        sum+=num;
    }
    average=sum/n;
    printf("\nAverage is: %f\n",average);

}*/
