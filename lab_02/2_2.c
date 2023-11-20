#include <stdio.h>
#include <stdlib.h>

int main()
{
    char rome_num;

    printf("podaj liczbe rzymska");
    if(scanf("%c", &rome_num) == 1)
    {
        switch (rome_num) {
            case 'I':
                printf("1");
                break;
            case 'V':
                printf("5");
                break;
            case 'X':
                printf("10");
                break;
            case 'L':
                printf("50");
                break;
            case 'C':
                printf("100");
                break;
            case 'D':
                printf("500");
                break;
            case 'M':
                printf("1000");
                break;
            default:
                printf("zla liczba");
                exit(2);
        }
    }
    else
    {
        printf("zle dane");
        exit(1);
    }
}