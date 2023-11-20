#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;

    printf("podaj kwote");
    if(scanf("%d", &money) == 1)
    {
        if(money > 0)
        {
                int num200 = money / 200;
                money -= num200 * 200;

                int num100 = money / 100;
                money -= num100 * 100;

                int num50 = money / 50;
                money -= num50 * 50;

                int num20 = money / 20;
                money -= num20 * 20;

                int num10 = money / 10;
                money -= num10 * 10;

                int num5 = money / 5;
                money -= num5 * 5;

                int num2 = money / 2;
                money -= num2 * 2;

                int num1 = money / 1;
                money -= num1 * 1;

                printf("200: %d\n", num200);
                printf("100: %d\n", num100);
                printf("50: %d\n", num50);
                printf("20: %d\n", num20);
                printf("10: %d\n", num10);
                printf("5: %d\n", num5);
                printf("2: %d\n", num2);
                printf("1: %d\n", num1);
        }
        else
        {
            printf("wartosc ujemna");
            exit(2);
        }
    }
    else
    {
        printf("niepoprawne dane");
        exit(1);
    }
}