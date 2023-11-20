#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int nums[5];
    int res[5];
    int tmp;
    int counter = 0;

    printf("podaj 5 liczb");
    for (int i = 0; i < 5; i++)
    {
        if(scanf("%d", &tmp) == 1)
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
        int n = nums[i];
        int flag = 1;

        do {
            int digit = n % 10;

            if(digit % 2 != 0)
            {
                flag = 0;
                break;
            }

            n /= 10;
        }while(n != 0);

        if(flag == 1)
        {
            res[counter++] = nums[i];
        }
    }

    printf("znaleziono %d liczby w wszystkich cyfrach parzystych:\n", counter);
    for(int i = 0; i < strlen(res); i++)
    {
        printf("%d\n", res[i]);
    }
}