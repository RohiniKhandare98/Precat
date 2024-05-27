#include <conio.h>
#include <stdio.h>

void main()
{
    char name[20];

    printf("Enter name : ");

    gets(name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("  %c", name[i]);
    }
    // printf(" length of char array is :  %d", strlen(name));
    // printf(" reverse of char array is :  %s", strrev(name));
}