#include <conio.h>
#include <stdio.h>

// grade showing by giving percentage
void main()
{

    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 45 && marks <= 60)
    {
        printf("PASS");
    }
    else if (marks > 60 && marks <= 70)
    {
        printf("A GRADE");
    }
    else if (marks > 70 && marks <= 75)
    {
        printf("A+");
    }
    else if (marks > 75)
    {
        printf("EXCELLENCE");
    }
    else
    {
        printf("FAIL");
    }
}