#include <conio.h>
#include <stdio.h>

void main()
{
    char original[10], reversed[10];

    printf("\nEnter the string  ");
    gets(original);

    printf("original %s \n\n", original);

    // to check palindrome
    // 1 - copy original String to another String
    // 2 - reverse the coppied String
    // 3 - compare the original and reversed string

    strcpy(reversed, original);
    strrev(reversed);

    printf("Palindromic  %s \n", reversed);
    int res = strcmp(original, reversed);

    if (res == 0)
    {
        printf("Plaindrome");
    }
    else
    {
        printf("Not plindrome");
    }
}