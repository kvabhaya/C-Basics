#include<stdio.h>
void main()
{
    int i,j,k,sum,a[2][2],b[2][2],c[2][2];
    printf("Enter first matrix elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter second matrix elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);
    }
    printf("\nEntered first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nEntered second matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    printf("\n-------------------------------------------\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
                c[i][j]=sum;
            }
        }
    }
    printf("\nMultiplication of matrix:\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
