#include <conio.h>
#include <stdio.h>

typedef struct CircularQueue
{

    // parameters for queue

    int *arr, size;
    int front, rear;

} Queue;

// creating variable here

Queue q;

// function for is empty
int isEmpty()
{

    if (q.front == -1)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if (q.front == (q.rear + 1) % q.size)
    {
        return 1;
    }
    return 0;
}

void enQueue(int data)
{
    if (!isFull())
    { // if not full then add
        if (isEmpty())
        {
            q.front = 0;
        }
        q.rear = (q.rear + 1) % q.size;
        q.arr[q.rear] = data;
    }
    else
    { /// if queue is full then return full
        printf("\n\n Queue is full");
    }
}

int deQueue()
{
    int data = -9999;
    if (!isEmpty())
    {
        data = q.arr[q.front];
        if (q.front == q.rear)
        {
            q.rear = q.front = -1;
        }
        else
        {
            q.front = (q.front + 1) % q.size;
        }
    }

    return data;
}

void display()
{
    int i;
    for (i = q.front; i != q.rear; i = (i + 1) % q.size)
        printf("%d <---", q.arr[i]);
    if (i == q.rear)
        printf("%d ", q.arr[i]);
}
