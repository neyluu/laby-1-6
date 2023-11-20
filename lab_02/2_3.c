#include <stdio.h>
#include <stdlib.h>

int main()
{
    float income;

    printf("podaj dochod");
    if(scanf("%f", &income) == 1)
    {
        if(income > 0)
        {
            if(income <= 40000)
            {
                printf("podano liczbe %.2f\n", income);
                printf("podatek wynosi %.2f\n", income * .1);
            }
            else if( income <= 80000)
            {
                printf("podano liczbe %.2f\n", income);
                printf("podatek wynosi %.2f\n", (40000 * .1) + (income - 40000) * .2);
            }
            else
            {
                printf("podano liczbe %.2f\n", income);
                printf("podatek wynosi %.2f\n", (40000 * .1) + (40000 * .2) + (income - 80000) * .3);
            }
        }
        else
        {
            printf("podano ujemny dochod");
            exit(2);
        }
    }
    else
    {
        printf("zle dane");
        exit(1);
    }
}