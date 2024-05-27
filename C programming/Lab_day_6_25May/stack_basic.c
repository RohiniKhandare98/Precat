#include <conio.h>
#include <stdio.h>

typedef struct stack
{ // created structure of stack
    int arr[5];
    int size;
    int top;

} stack;

void push(stack *s, int data)
{

    if (s->top != s->size - 1)
    {
        s->top++;
        s->arr[s->top] = data;
    }
    else
    {
        printf("Stack is full ");
    }
}
int pop(stack *s)
{

    int data = -9999;
    if (s->top != -1)
    {
        data = s->arr[s->top];
        s->top--;
    }
    return data;
}

int peek(stack *s)
{

    // printf("%d" , s->);
    return s->arr[s->top];
}

void display(stack *s)
{
    printf("\n\tStack is -----\n");
    for (int i = s->top; i >= 0; i--)
        printf("\n\t%d", s->arr[i]);
}
void main()
{

    // creating variables of stack
    stack s1;
    s1.top = -1; // intializing the stack  by giving top and size values
    s1.size = 5;
    int ch, data;

    // scanf("%d" , ch);

    do
    {
        printf("\n\t1. add element \
                  \n\t2. remove element \
			      \n\t3. display elements in stack \
                  \n\t4. show top element \
                  \n\t0. exit \
                  \n\tEnter Your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\n\t Enter Value ");
            scanf("%d", &data);
            push(&s1, data);
            break;
        case 2:
            data = pop(&s1);
            if (data == -9999)
                printf("\n\n\t Stack is empty ");
            else
                printf("\n\n\t Deleted Ele Is %d\n\n", pop(&s1));
            break;
        case 3:
            display(&s1);
            break;

        case 4:
            data = peek(&s1);
            if (data == -9999)
                printf("\n\n\t Stack is empty ");
            else
                printf("\n\n\t topmost element is : %d\n\n", peek(&s1));
            break;

        default:
            printf("\n\t program ended !!\n\n ");
            break;
        }

    } while (ch != 0);
}