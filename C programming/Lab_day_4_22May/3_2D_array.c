#include <conio.h>
#include <stdio.h>

void main()
{
    int *marks, no, i;

    printf("\n\t Enter no. of subjects ");
    scanf("%d", &no);

    // malloc   -->
    // 1 return type is void
    // 2  need only one argument

    marks = (int *)malloc(sizeof(int) * no);
    // marks = (int*)calloc(sizeof(int),no);

    printf("\n\t Enter %d Marks ", no);
    for (i = 0; i < no; i++)
        scanf("%d", &marks[i]);

    printf("\n\n\t Array of subjects is  \n\n");
    for (i = 0; i < no; i++)
        printf("%d\t", marks[i]);

    free(marks);

    // usign calloc
    // 1
}