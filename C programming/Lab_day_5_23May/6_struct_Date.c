#include <conio.h>
#include <stdio.h>

typedef struct Date
{ // user defined  data type for date

    int dd, mm, yy;

} Date;

typedef struct Employee
{
    int id;
    char name[20];
    float salary;
    Date DOB; // date of birth
    Date DOJ; // date of joining

} Emp;

void main()
{
    Emp emp1 = {101, "rohini", 50000, 12, 12, 1998, 12, 12, 2014};

    printf("\n\tid :  %d  \t name : %s  \tsalary : %.2f ", emp1.id, emp1.name, emp1.salary);
    printf("\n\n\tdate of birth :  %d-%d-%d", emp1.DOB.dd, emp1.DOB.mm, emp1.DOB.yy);
    printf("\n\tdate of joining :  %d-%d-%d", emp1.DOJ.dd, emp1.DOJ.mm, emp1.DOJ.yy);
}