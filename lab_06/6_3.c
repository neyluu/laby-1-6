#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char matrix[10][10];
    int bombs = 1;

    srand(time(NULL));

    int cordX = rand() % 10;
    int cordY = rand() % 10;

    matrix[cordX][cordY]= '*';

    while(bombs < 25)
    {
        do {
            cordX = rand() % 10;
            cordY = rand() % 10;
        }while(matrix[cordX][cordY] == '*');

        matrix[cordX][cordY] = '*';
        bombs++;
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(matrix[i][j] == '*')
            {
                printf("%c ", matrix[i][j]);
            }
            else
            {
                int around = 0;

                if(matrix[i-1][j-1] == '*' && i-1 >= 0 && j-1 >= 0) around++;
                if(matrix[i-1][j] == '*' && i-1 >= 0) around++;
                if(matrix[i-1][j+1] == '*' && i-1 >= 0 && j+1 < 10) around++;
                if(matrix[i][j-1] == '*' && j-1 >= 0) around++;
                if(matrix[i][j+1] == '*' && j+1 < 10) around++;
                if(matrix[i+1][j-1] == '*' && i+1 < 10 && j-1 >= 0) around++;
                if(matrix[i+1][j] == '*' && i+1 < 10) around++;
                if(matrix[i+1][j+1] == '*' && i+1 < 10  && j+1 < 10) around++;

                if(around > 0)
                {
                    printf("%c ", around + '0');
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}