#include <conio.h>
#include <stdio.h>

void main()
{

    int n, flag = 1;
    printf("Enter your Number : ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        // printf("Neither not prime nor prime")
        flag = 0;
        }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("number is prime ");
    }
    else
    {
        printf("number is Not prime ");
    }
}
