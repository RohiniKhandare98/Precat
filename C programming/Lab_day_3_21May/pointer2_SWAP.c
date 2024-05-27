#include <conio.h>
#include <stdio.h>

// swap in main function

void main()
{

    int a = 10, b = 5, temp;

    int *p, *q;
    printf("\n\n");
    printf(" unswapped :  %d %d ", a, b);
    p = &a;
    q = &b;

    temp = *p; // swaping value of a to temp
    *p = *q;   // swapping value of b to pointer p or a
    *q = temp; // wapping value of temp to pointer q or b
    printf("\n\n\n");
    printf(" Swapped :  %d %d ", a, b);
    printf("\n\n");
}