#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Podaj 2 liczby");
    if(scanf("%d %d", &a, &b) == 2)
    {
        if(a >= 0 && b >= 0)
        {
            int max = 0;
            int max_n;

            for(int i = a; i <= b; i++)
            {
                int counter = 0;
                a = i;
                do
                {
                    if(a % 2 == 0)
                    {
                        a /= 2;
                        counter++;
                    }
                    else
                    {
                        a = 3 * a + 1;
                        counter++;
                    }
                }while(a != 1);

                if(counter > max)
                {
                    max = counter;
                    max_n = i;
                }

                printf("%d %d\n", i, counter);
            }
            printf("max: %d %d", max_n, max);
        }
        else
        {
            printf("liczby ujemne");
            exit(2);
        }
    }
    else
    {
        printf("incorrect input");
        exit(1);
    }


}