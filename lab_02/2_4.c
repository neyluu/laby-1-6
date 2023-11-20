#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ax, ay, bx, by, cx, cy;

    printf("podaj wspolrzedne wierzcholkow A, B, C");
    if(scanf("%f %f %f %f %f %f", &ax, &ay, &bx, &by, &cx, &cy) == 6)
    {
        float ab, bc, ca;

        ab = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
        bc = sqrt(pow(cx - bx, 2) + pow(cy - by, 2));
        ca = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

        float min, mid, max;

        if(ab < bc)
        {
            if(bc < ca)
            {
                min = ab;
                mid = bc;
                max = ca;
            }
            else
            {
                if(ab < ca)
                {
                    min = ab;
                    mid = ca;
                    max = bc;
                }
                else
                {
                    min = ca;
                    mid = ab;
                    max = bc;
                }
            }
        }
        else
        {
            if(bc < ca)
            {
                if (ab < ca)
                {
                    min = bc;
                    mid = ab;
                    max = ca;
                }
                else
                {
                    min = bc;
                    mid = ca;
                    max = ab;
                }
            }
            else
            {
                min = ca;
                mid = bc;
                max = ab;
            }
        }

        if(min + mid > max)
        {
            float area = abs((bx - ax) * (cy - ay) - (by - ay) * (cx - ax)) / 2.0;
            printf("pole trojkata: %.2f", area);
        }
        else
        {
            printf("nie da sie trojkat");
            exit(2);
        }
    }
    else
    {
        printf("zle dane");
        exit(1);
    }

}