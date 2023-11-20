#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char text[101];
    char output[101] = "\n";

    printf("podaj tekst");
    scanf("%100[^\n]", text);

    output[0] = text[0];

    for(int i = 1; i <= strlen(text) - 1; i++)
    {
        if(i % 2 == 0)
        {
            output[i] = text[i - 1];
        }
        else if(i % 2 == 1)
        {
            output[i] = text[i + 1];
        }
    }

    if(strlen(text) % 2 == 0)
    {
        output[strlen(text) - 1] = text[strlen(text) - 1];
    }

    printf("%s", output);

}