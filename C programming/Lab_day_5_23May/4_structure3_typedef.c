#include <conio.h>
#include <stdio.h>

// way 1 ----- at the time of initialization
typedef struct Student
{
    int rollno;
    char name[20];
    float fees;
} stud; /// and name is writen here before semicolon

// way 2 ---- after initialization of struct
// typedef struct Student stud;

stud accept(stud);
void display(stud);

void main()
{
    stud s1 = accept(s1);
    stud s2 = accept(s2);
    display(s1);
    display(s2);
}

stud accept(stud s)
{
    printf("Enter the roll number , name and fees of student ");

    scanf("%d %s %f", &s.rollno, s.name, &s.fees);

    return s;
}

void display(stud s)
{
    printf("\n\tid  : %d \t name : %s  \t price :%.2f \n", s.rollno, s.name, s.fees);
}
