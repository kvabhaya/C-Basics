#include<stdio.h>
void main()
{
    int a[2][3],i,j,b[3][2];
    printf("Enter elements of Matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered Matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }


}
