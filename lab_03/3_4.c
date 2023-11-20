#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("podaj 2 liczby");
    if(scanf("%d %d", &num1, &num2) == 2)
    {
        if(num1 >= 0 && num2 >= 0 && num2 <= 3000)
        {
            for(int i = num1; i <= num2; i++)
            {
                for(int j = num1 + 1; j < num2; j++)
                {
                    if(i == j) continue;

                    int sum_i = 0;
                    int sum_j = 0;

                    for(int k = 1; k <= i / 2 + 1; k++)
                    {
                        if(i % k == 0)
                        {
                            sum_i += k;
                        }
                    }
                    for(int k = 1; k <= j / 2 + 1; k++)
                    {
                        if(j % k == 0)
                        {
                            sum_j += k;
                        }
                    }

                    if(sum_i == j && sum_j == i && i < j)
                    {
                        printf("W: %d %d\n", i, j);
                    }
                }
            }
        }
        else
        {
            exit(2);
        }
    }
    else
    {
        exit(1);
    }
}