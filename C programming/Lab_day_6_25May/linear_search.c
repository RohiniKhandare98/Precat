#include <conio.h>
#include <stdio.h>

void main()
{

    // // linear search

    int arr[5] = {1, 2, 3, 4, 5};

    int index = -1, key = 3;

    for (int i = 0; i < 5; i++)
    {

        // check if data is equal or not
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    // check whether index is updated or not
    if (index == -1)
    {
        printf("key is not found");
    }
    else
    {
        printf("key is found at %d", index);
    }
}