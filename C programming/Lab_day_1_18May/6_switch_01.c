#include <conio.h>
#include <stdio.h>

void main()
{
    int n1, n2, ch;
    printf("Enter numbers : ");
    scanf("%d%d", &n1, &n2);

    printf("1 : addition");
    printf("\n2 : subtraction");
    printf("\n3 : multiplication");
    printf("\n4 : division");
    printf("\nEnter Your choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1: // addition
        printf("Addition is : %d", n1 + n2);
        break;

    case 2: // subtraction
        printf("subtraction is : %d", n1 - n2);
        break;

    case 3: // multification
        printf("multification is : %d", n1 * n2);
        break;

    case 4: // division
        printf("division is : %d", n1 / n2);
        break;

    default:
        printf("Wrong Selection . please provide correct choice");
        break;
    }
}
