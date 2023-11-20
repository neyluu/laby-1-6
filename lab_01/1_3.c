#include <stdio.h>

int main()
{
    float download, upload;

    printf("podaj download mbit/s");
    scanf("%f", &download);

    while(getchar() != '\n') {}

    printf("podaj upload mbit/s");
    scanf("%f", &upload);

    // do mb/s
    download /= 8;
    upload /= 8;



    printf("czas pobierania: %.2f s\n", 500.0/download);
    printf("czas wysylania: %.2f s\n", 500.0/upload);
}