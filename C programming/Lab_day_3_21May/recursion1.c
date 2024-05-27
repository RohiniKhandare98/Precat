#include <conio.h>
#include <stdio.h>

// print numbers 5 4 3 2 1
void function1(int n)
{
    if (n != 0)
    {
        printf("%d", n);
        function1(n - 1);
    }
}

// print numbers  1 2 3 4 5
void function2(int n)
{
    if (n != 0)
    {
        function2(n - 1);
        printf("%d", n);
    }
}
void main()
{
    printf("\n\n");
    function1(5);
    printf("\n\n");
    function2(5);
}