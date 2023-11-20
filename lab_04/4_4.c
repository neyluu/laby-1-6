#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    float nums[5];
    float squared_nums[5];
    float min, max, tmp;

    printf("podaj 5 liczb");
    for (int i = 0; i < 5; i++)
    {
        if(scanf("%f", &tmp) == 1)
        {
            nums[i] = tmp;
        }
        else
        {
            printf("incorrect input");
            exit(1);
        }
    }

    for(int i = 0; i < 5; i++)
    {
        squared_nums[i] = nums[i] * nums[i];
    }

    min = squared_nums[0];
    max = squared_nums[0];

    for(int i = 0; i < 5; i++)
    {
        if(squared_nums[i] < min) min = squared_nums[i];
        if(squared_nums[i] > max) max = squared_nums[i];
    }

    printf("liczby podniesione do kwadratu:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%.2f ", squared_nums[i]);
    }

    printf("\nmin: %.2f\n", min);
    printf("max: %.2f\n", max);

    printf("elementy mniejsze od najwiekszego: ");
    for(int i = 0; i < 5; i++)
    {
        if(squared_nums[i] == max) continue;
        else
        {
            printf("%.2f ", squared_nums[i]);
        }
    }
}