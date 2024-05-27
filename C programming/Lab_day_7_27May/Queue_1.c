#include "Header_1.h"

#include <stdlib.h>

void main()
{
    //////// initializing the Queue
    printf("Enter the Size of Queue ");
    scanf("%d ", &q.size); // user input for size

    // allocated memory for array which is created in struct
    q.arr = (int *)malloc(sizeof(int) * q.size);
    q.front = q.rear = -1;
    //////// end initialization

    int ch = 5, data;
    do
    {
        printf("\n\n\t1. Enqueue - Add in Queue\
                  \n\t2. deQueue - delete from Queue\
                  \n\t3. Display - diaplay the Queue\
			      \n\t0. exit - end the program \
                  \n\n\t Enter Your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\t Enter value to be add in Queue ");
            scanf("%d", &data);
            enQueue(data);
            break;
        case 2:
            data = deQueue();
            if (data == -9999)
                printf("\n\n\t Queue is empty ");
            else
                printf("\n\n\t Deleted element from Queue is :  %d", data);
            break;
        case 3:

            printf("\n\nQueue is  :  ");
            display();
            break;

        default:
            break;
        }

    } while (ch != 0);
}