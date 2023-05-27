#include<stdio.h>
void main()
{
    int i,j,a[2][3],sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nsum=%d",sum);
}
