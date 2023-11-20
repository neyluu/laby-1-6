#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    srand(time(0));

    int matrix[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = (rand() % (9 - 1 + 1)) + 1;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    char mode;
    int n1, n2;

    printf("Co chcesz zamienic (w - wiersze, k - kolumny):");
    if(scanf("%c", &mode) == 1)
    {
           if(tolower(mode) != 'k' && tolower(mode) != 'w')
           {
               exit(1);
           }
    }
    else exit(1);

    getchar();

    int tmp;

    if(tolower(mode) == 'k')
    {
        printf("Podaj numery kolumn");
        if(scanf("%d %d", &n1, &n2) == 2)
        {
            if(n1 > 0 && n2 > 0 && n1 <= 5 && n2 <= 5)
            {
                for(int i = 0; i < 5; i++)
                {
                    tmp = matrix[i][n2 - 1];
                    matrix[i][n2 - 1] = matrix[i][n1 - 1];
                    matrix[i][n1 - 1] = tmp;
                }
            }
            else exit(2);
        }
        else exit(2);
    }

    if(tolower(mode) == 'w')
    {
        printf("Podaj numery wierszy");
        if(scanf("%d %d", &n1, &n2) == 2)
        {
            if(n1 > 0 && n2 > 0 && n1 <= 5 && n2 <= 5)
            {
                for(int i = 0; i < 5; i++)
                {
                    tmp = matrix[n2 - 1][i];
                    matrix[n2 - 1][i] = matrix[n1 - 1][i];
                    matrix[n1 - 1][i] = tmp;
                }
            }
            else exit(2);
        }
        else exit(2);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}