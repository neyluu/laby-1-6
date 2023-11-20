#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;

    printf("Podaj liczbe punktow");
    if(scanf("%d", &mark) == 1)
    {
        if(mark >= 0 && mark <= 100)
        {
            if(mark <= 50)
            {
                printf("dwojka");
            }
            else if(mark <= 70)
            {
                printf("trojka");
            }
            else if(mark <= 90)
            {
                printf("czworka");
            }
            else
            {
                printf("piatka");
            }
        }
        else
        {
            printf("Zle dane");
            exit(2);
        }
    }
    else
    {
        printf("Incorrect input");
        exit(1);
    }
}