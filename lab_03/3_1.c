#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("podaj 2 liczby");
    if(scanf("%d %d", &num1, &num2) == 2)
    {
        if(num1 > 0 && num2 > 0)
        {
            int nwd;

            for(int i = 1; i <= num1 && i <= num2; i++)
            {
                if(num1 % i == 0 && num2 % i == 0)
                {
                    nwd = i;
                }
            }

            int nww = num1 * num2 / nwd;

            printf("%d", nww);
        }
        else
        {
            printf("liczba ujemna");
            exit(2);
        }
    }
    else
    {
        printf("incorrect input");
        exit(1);
    }
}