#include <conio.h>
#include <stdio.h>

void main()
{
    int n, fact = 1;
    printf("\nEnter your number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("\nfactorial of %d  is %d  \n", n, fact);
}
