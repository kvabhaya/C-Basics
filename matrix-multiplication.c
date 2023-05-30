#include<stdio.h>
#define Z 100
void main()
{
    int i,j,k,A[Z][Z],X[Z],Y[Z],m,n,p,sum;
    printf("For the Table------>\n");
    printf("How many rows in table: \n");
    scanf("%d",&m);
    printf("How many columns in table: \n");
    scanf("%d",&n);
    printf("\n");
    printf("For the List------>\n");
    printf("How many elements in list: \n");
    scanf("%d",&p);
    printf("\n");
    if(m<0||n<0)
    {
        printf("You Entered Value Less Than 0\n");
    }
    else{
        if(n!=p)
            printf("Oh! No! You Entered table's columns and list's elements are mismatched\n\n");
        else
        {
            printf("Enter rows and columns elements:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&A[i][j]);
                }
            }
            printf("\nEntered Table is:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t",A[i][j]);
                }
                printf("\n");
            }

            printf("\n-------------------------------------------\n");

            printf("\nEnter list's elements:\n");
            for(i=0;i<p;i++)
            {
                scanf("%d",&X[i]);
            }
            printf("\nEntered list:\n");
            for(i=0;i<p;i++)
            {
                printf("%d",X[i]);
                printf("\n");
            }
            printf("\n-------------------------------------------\n");

            for (i=0;i<m;i++)
            {
                for(j=0;j<p;j++)
                {
                    sum=0;
                    for(k=0;k<p;k++)
                    {
                        sum=sum+(A[i][k]*X[k]);
                        Y[i]=sum;
                    }
                }
            }
            printf("\nHA! HA! You Got the Answer ^__^\n\n");
            for (i=0;i<m;i++)
            {
                printf("%d",Y[i]);
                printf("\n");
            }
        }

    }

}
