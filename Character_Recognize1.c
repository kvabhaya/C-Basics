#include<stdio.h>

void main()
{
    char cha;
    printf ("Enter a Character: ");
    scanf ("%c",&cha);

    if ((cha>='a'&& cha<='z')||(cha>='A'&& cha<='Z'))
        printf("is Alphabetic Character");
    else
        if (cha>='0'&& cha<='9')
            printf("is A Digit");
        else
            printf("is A Special Character");

}
