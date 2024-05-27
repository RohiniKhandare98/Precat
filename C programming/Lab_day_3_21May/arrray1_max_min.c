#include <conio.h>
#include <stdio.h>

// find max element in array

int findmax(int arr[], int size)
{

    int max = arr[0]; // initialize max with arr[0]

    for (int i = 1; i < size; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findmin(int arr[], int size)
{

    int min = arr[0]; // initialize max with arr[0]

    for (int i = 1; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void main()
{

    // scan the  int array from user
    // scanf("%d" , &arr[i]);
    int arr[] = {1, 2, 3, 4, 5}; //  initializaton of array

    int max = findmax(arr, 5);
    int min = findmin(arr, 5);

    printf("maximum element is :  %d", max);
    printf("\n\n");
    printf("minimum element is :  %d", min);
}