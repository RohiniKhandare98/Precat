#include <conio.h>
#include <stdio.h>

void main()
{
    int arr[10] = {-6, 2, 9, 15, 24, 35, 37, 42, 56, 70};
    int index = -1, l = 0, r = 10 - 1, key = 42;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    printf("%d", index);
}