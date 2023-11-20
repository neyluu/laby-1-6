#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    int num;

    printf("podaj pierwszy ciag wyrazu");
    if (scanf("%d", &num) != 1) {
        exit(1);
    }

    if (num % 3 != 0) {
        printf("POdana wartosc nie jest wyrazem ciagu");
        exit(1);
    }

    matrix[0][0] = num;
    int last_val = num;

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == 0 && j == 0)
            {
                continue;
            }
            else
            {
                last_val += 3;
                matrix[i][j] = last_val;
            }
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
}
