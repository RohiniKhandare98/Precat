
#include <conio.h>
#include <stdio.h>

void main()
{

    char s1[10], s2[10];

    printf("\nEnter the string  ");
    gets(s1);

    printf("original %s \n\n", s1);

    // strcpy

    char copy[20];
    strcpy(copy, s1);
    printf("coppied  %s  , original  %s", copy, s1);

    // strcmp   == 1  // larger or smaller strings

    char comparedString[10];
    printf("\n\nEnter the String to compare ");
    gets(comparedString);

    int res = strcmp(s1, comparedString);
    printf(" comp output : %d", res);
    if (res < 0)
    {
        printf("\noriginal string is greater");
    }
    else if (res > 0)
    {
        printf("\ncompared string is greater ");
    }
    else
    {
        printf("\nBoth string are same ");
    }

    // // concat strings

    char concatString[40],
        str[40];

    printf("\nEnter the string  ");
    gets(str);
    printf("\n concat string  ");
    gets(concatString);

    concatString = strcat(s1, copy);
    strcat(str, concatString);
    printf("\n\nConcatinated Strings are  :  %s", str);
}