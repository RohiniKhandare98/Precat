#include <conio.h>
#include <stdio.h>

// factorial using recursion
int factorial(int n)
{
    if (n == 1)
        return 1;

    return n * factorial(n - 1);
}

void main()
{
    printf("\n\n");

    printf(" factorial is :  %d", factorial(5));

    printf("\n\n");
}