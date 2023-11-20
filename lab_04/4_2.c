#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int nums[20];
    int num1, num2;

    printf("podaj 2 liczby");
    if(scanf("%d %d", &num1, &num2) == 2)
    {
        if(num1 < num2 && num1 >= 1 && num2 <= 10)
        {
            for(int i = 0; i < 20; i++)
            {
                nums[i] = (rand() % (num2 - num1 + 1)) + num1;
            }

            int quantity[10];
            for(int i = 0; i < 10; i++) quantity[i] = 0;

            for(int i = 0; i < 20; i++)
            {
                quantity[nums[i]]++;
            }

            for (int i = 0; i < 20; i++)
            {
                printf("%d ", nums[i]);
            }
            printf("\n");
            for (int i = 1; i <= 10; i++)
            {
                if(quantity[i - 1] != 0)
                {
                    printf("Liczba %d wystapila %d razy\n", i - 1, quantity[i - 1]);
                }
            }
        }
        else
        {
            printf("zly zakres");
            exit(2);
        }
    }
    else
    {
        printf("incorrect input");
        exit(1);
    }

}