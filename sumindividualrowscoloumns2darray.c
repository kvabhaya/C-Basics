#include<stdio.h>
void main()
{
    int a[3][3],i,j,row_sum,col_sum;
    printf("Enter Elements for Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nEntered Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSums of individual Rows and Coloumns \n");
    for(i=0;i<3;i++)
    {
        row_sum=col_sum=0;
        for(j=0;j<3;j++)
        {
            row_sum=row_sum+a[i][j];
            col_sum=col_sum+a[j][i];
        }
        printf("\nRow sum=%d, Col sum=%d",row_sum,col_sum);
        printf("\n");
    }
}
