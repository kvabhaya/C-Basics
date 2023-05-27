/*#include<stdio.h>
#include<conio.h>

void main()
{
    int marks;
    printf("Enter your Marks: ");
    scanf("%d",&marks);

    if (marks>=75)

    else if (marks>=65)

    else if (marks>=55)

    else if (marks>=45)

    else


    switch(m)
    {
        case
    }
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    switch(marks){
        case 75 ... 100:
        printf("Grade A \n", marks);
        break;

        case 65 ... 74:
        printf("Grade B \n", marks);
        break;

        case 55 ... 64:
        printf("Grade C \n", marks);
        break;

        case 45 ... 54:
        printf("Grade S \n", marks);
        break;

        default:
        printf("You are failed\n");

    }
    printf("\n\nStatement X\n");

    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    switch(marks/10){
        case 10:
        case 9:
        case 8:
            printf("Grade A \n", marks);
            break;

        case 7:
        case 6:
            printf("Grade B \n", marks);
            break;

        case 5:
            printf("Grade C \n", marks);
            break;

        case 4:
            printf("Grade S \n", marks);
            break;

        default:
            printf("You are failed\n");

    }
    printf("\n\nStatement X\n");

    return 0;
}*/

#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,value;
    int choice;
    printf("Enter numbers as 'a' and 'b' \n");
    printf("Enter numbers as 'a' and 'b' \n");
    scanf("%f %f",&a,&b);

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter Your Choice as 1 or 2 or 3 or 4\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            value = a+b;
            printf("Addition is: %f",value);
            break;
        case 2:
            value = a-b;
            printf("%f",value);
            break;
        case 3:
            value = a*b;
            printf("%f",value);
            break;
        case 4:
            value = a/b;
            printf("%f",value);
        getch();
    }

}
