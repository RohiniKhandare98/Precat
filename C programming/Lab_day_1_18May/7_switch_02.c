#include <conio.h>
#include <stdio.h>

void main()
{
    int n, ch;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("1 : check number is Even or Odd ? ");
    printf("\n2 : check number is positive or negative ? ");

    printf("\nEnter Your choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1: // Even or Odd
        if (n % 2 == 0)
            printf("%d  is Even", n);
        else
        {
            printf("%d  is Odd", n);
        }
        break;

    case 2: // Positive or negative
        if (n > 0)
            printf("%d  is Positive", n);
        else
        {
            printf("%d  is Negative", n);
        }
        break;

    default:
        printf("Wrong Selection . please provide correct choice");
        break;
    }
}