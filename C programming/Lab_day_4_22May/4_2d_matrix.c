
#include <conio.h>
#include <stdio.h>

void addition()
{
    int m1[3][2] = {{0, 1}, {2, 3}, {4, 5}};
    int m2[3][2] = {{2, 2}, {3, 4}, {5, 2}};

    printf("\nAddition of matrix is  : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("m1[%i][%i]: ", i, j);

            printf("%d  ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
}

void transposeOfMatrix()
{

    int m1[2][2] = {{0, 1}, {2, 3}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int temp = m1[i][j];
            m1[i][j] = m1[j][i];
            m1[j][i] = temp;
        }
    }

    printf("\nThe transpose matrix is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int matrix[3][2] = {{0, 1}, {2, 3}, {4, 5}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[%i][%i]:  ", i, j);
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    addition();

    transposeOfMatrix();
}