#include <stdio.h>
#include <string.h>

int main()
{
    int hr, min, sec;

    printf("Podaj godzine w formacie HH:MM:SS");
    scanf("%d:%d:%d", &hr, &min, &sec);

    int elapsed = hr * 3600 + min * 60 + sec;

    printf("od godziny 00:00 uplynelo %d", elapsed);

    int sum = 0;

    while(elapsed != 0)
    {
        sum += elapsed % 10;
        elapsed /= 10;
    }

    printf("\nsuma cyfr %d", sum);
}