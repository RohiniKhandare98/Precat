#include <conio.h>
#include <stdio.h>

typedef struct Employee
{

    int id;
    char name[20];
    float salary;
} Emp;

void main()
{
    Emp e1 = {101, "rohini", 60000}; // e1 is structure variable

    printf("\n\n\tid : %d \t name :  %s \tsalary :  %.2f", e1.id, e1.name, e1.salary); // accessing values with variable with dot

    // creating structure pointer   // accessible with arrow
    Emp *ptr;
    ptr = (Emp *)malloc(sizeof(Emp)); // allocating memory for pointer

    printf("\n\n\tEnter employee id ,  name and salary ");
    scanf("%d %s %f", &ptr->id, ptr->name, &ptr->salary);
    printf("\n\tvalues accepted by stucture pointer ");
    printf("\n\tid  : %d \tname : %s \tsalary : %.2f", ptr->id, ptr->name, ptr->salary);

    free(ptr); //// free up the allocated memory of ptr through malloc
}