#include <conio.h>
#include <stdio.h>

void main()
{
    int n, count = 0;
    printf("Enter your number to Count Digit : ");
    scanf("%d", &n);

    // count digits
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    printf("digits in number is : %d", count);

    // sum of digits
    int mod = 0, sum;
    while (n > 0)
    {
        mod = n % 10;
        n /= 10;
        sum += mod;
    }
    printf("\nSum of digits in number is : %d", sum);
}