#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int matrix[6][6];

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            matrix[i][j] = rand() % 10 + 1;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int matrix1 = 0, matrix2 = 0, matrix3 = 0, matrix4 = 0;

    matrix1 = matrix[0][0] + matrix[1][1] + matrix[2][2];
    matrix2 = matrix[0][3] + matrix[1][4] + matrix[2][5];
    matrix3 = matrix[3][0] + matrix[4][1] + matrix[5][2];
    matrix4 = matrix[3][3] + matrix[4][4] + matrix[5][5];

    printf("slad macierzy 1: %d\n", matrix1);
    printf("slad macierzy 2: %d\n", matrix2);
    printf("slad macierzy 3: %d\n", matrix3);
    printf("slad macierzy 4: %d\n", matrix4);
}