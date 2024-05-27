#include <conio.h>
#include <stdio.h>

void display_passByValue(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}

void display_passByReference(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", *(arr + i));
    }
}

void main()
{
    int arr[] = {32, 43, 54, 65, 23};
    printf("\n\n");
    display_passByValue(arr, 5);
    printf("\n\n");
    display_passByReference(arr, 5);
    printf("\n\n");
}