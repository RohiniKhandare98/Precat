#include <conio.h>
#include <stdio.h>

void swap(int *, int *); // function declaration

void main()
{

    int a = 5, b = 10;
    printf("\n\n");
    printf(" unswapped :  %d %d ", a, b);

    swap(&a, &b);

    printf("\n\n");
    printf(" unswapped :  %d %d ", a, b);
}

void swap(int *a, int *b) // function definition
{
    int temp = *a;
    *a = *b;
    *b = temp;
}