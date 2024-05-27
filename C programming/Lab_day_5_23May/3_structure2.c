#include <conio.h>
#include <stdio.h>

// Array of Structure
// struct Book b[3];  // creates array

struct Book
{
    int id;
    char name[20];
    int price;
}; // semocolon must  after struct

void main()
{

    struct Book b[3];

    /////// for accepting values from user usinf scanf
    for (int i = 0; i < 3; i++)
    {
        printf("Enter book number  ,  name  , and price : ");
        scanf("%d %s %d", &b[i].id, b[i].name, &b[i].price);
        // printf("\nBook id  : %d \nBook name : %s  \nbook price :%d", b[i].id, b[i].name, b[i].price);
    }

    ///// printing book details

    for (int i = 0; i < 3; i++)
    {
        printf("\n for Book %d ", i);
        printf("\n\tid  : %d \t name : %s  \t price :%d \n", b[i].id, b[i].name, b[i].price);
    }
}