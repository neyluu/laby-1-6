#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int nums[10];
    int num1, num2;

    printf("podaj 2 liczby");
    if(scanf("%d %d", &num1, &num2) == 2)
    {
        if(num1 < num2)
        {
            int r = num2 - num1;

            nums[0] = num1;
            nums[1] = num2;

            for(int i = 2; i < 10; i++)
            {
                nums[i] = nums[i - 1] + r;
            }

            for(int i = 0; i < 10; i++)
            {
                printf("%d ", nums[i]);
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