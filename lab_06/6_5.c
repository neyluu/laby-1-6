#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x1, y1, x2, y2;

    printf("podaj wymiary macierzy 1:");
    int res1 = scanf("%d %d", &x1, &y1);

    while(getchar() != '\n'){}

    printf("podaj wymiary macierzy 2:");
    int res2 = scanf("%d %d", &x2, &y2);

    //input validation
    if(res1 != 2 || res2 != 2)
    {
        printf("zle dane");
        exit(1);
    }
    if((x1 < 0 || y1 < 0 ) || (x2 < 0 || y2 < 0))
    {
        printf("nieprawidlowy rozmiar macierzy");
        exit(1);
    }
    if(x1 > 5 || y1 > 5 || x2 > 5 || y2 > 5)
    {
        printf("przekroczono maksymalny rozmiar");
        exit(1);
    }

    int matrix1[x1][y1];
    int matrix2[x2][y2];

    for(int i = 0; i < x1; i++)
    {
        for(int j = 0; j < y1; j++)
        {
            matrix1[i][j] = rand() % 10;
        }
    }
    for(int i = 0; i < x2; i++)
    {
        for(int j = 0; j < y2; j++)
        {
            matrix2[i][j] = rand() % 10;
        }
    }

    printf("Wygenerowane macierze:\n");
    for(int i = 0; i < x1; i++)
    {
        for(int j = 0; j < y1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < x2; i++)
    {
        for(int j = 0; j < y2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    //suma
    if(x1 == x2 && y1 == y2)
    {
        printf("\nsuma macierzy\n");

        for(int i = 0; i < x1; i++)
        {
            for(int j = 0; j < y2; j++)
            {
                printf("%d ", matrix1[i][j] + matrix2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nnie mozna dodac macierzy\n\n");
    }

    //iloczyn
    printf("\niloczyn macierzy\n");
    for(int i = 0; i < x1; i++)
    {
        for(int j = 0; j < y2; j++)
        {
            int num = 0;
            for(int k = 0; k < x1; k++)
            {
                num += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", num);
        }
        printf("\n");
    }
    printf("\n");
}