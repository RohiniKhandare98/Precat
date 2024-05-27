#include <conio.h>
#include <stdio.h>

// * pointer holds the address or handles the address

void main()
{

    int a = 10;
    int *b; // declaration of pointer
    b = &a; //  pointer holds the address of the a variable

    printf("\nvalue of  a : %d", a);
    printf("\nvalue of  &a : %u", &a);
    printf("\nvalue of  b : %u", b); // %u is to store unsigned data type  ex - address
    printf("\nvalue of  &b : %u", &b);
    printf("\nvalue of  *b : %u", *b);
}