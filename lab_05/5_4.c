#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[201];

    printf("Podaj tekst do zaszyfrowania:");

    if(scanf("%201[^\n]", text) == 1)
    {
        //walidacja inputu
        for(int i = 0; i < (int)strlen(text); i++)
        {
            if( !((int)text[i] == 32 || ((int)text[i] >= 65 && (int)text[i] <= 90) || ((int)text[i] >= 97 && (int)text[i] <= 122)))
            {
                printf("zly znak");
                exit(1);
            }
        }

        int code;
        char output[201];
        int len = 0;

        printf("Podaj znak kodowy");

        if(scanf("%d", &code) == 1)
        {
            for(int i = 0; i < (int)strlen(text); i++)
            {
                char tmp;

                if((int)text[i] == 32)
                {
                    output[i] = ' ';
                    len++;
                }
                else if(isupper(text[i]))
                {
                    //Duze litery
                    tmp = (char) ( ( (int)text[i] + code - 65) % 26 + 65);
                    output[i] = tmp;
                    len++;
                }
                else
                {
                    //Male litery
                    tmp = (char) ( ( (int)text[i] + code - 97) % 26 + 97);
                    output[i] = tmp;
                    len++;
                }
            }

            output[len] = '\0';
            printf("%s", output);
        }
        else
        {
            exit(3);
        }
    }
    else
    {
        exit(1);
    }
}