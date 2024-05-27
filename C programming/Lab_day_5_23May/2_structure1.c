#include <conio.h>
#include <stdio.h>

// introduction to Structure

struct Employee
{
    int id;
    char name[20];
    float salary;
}; // semocolon must  after struct

void main()
{
    // creating variable of Struct Employee

    printf("\n\n");
    struct Employee e1 = {101, "rohini", 50000};
    printf("%d %s %.2f", e1.id, e1.name, e1.salary);

    printf("\n\n");
    struct Employee e2 = {102, "Khandare", 60000};
    printf("%d %s %.2f", e2.id, e2.name, e2.salary);
    printf("\n\n");
}