#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char text[101];
    int lives = 5;

    printf("podaj tekst:\n");
    scanf("%100[^\n]", text);

    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] == ' ') printf(" ");
        else printf("_");
    }

    while(1)
    {
        char guessed[101] = "\0";
        char guess = '\0';

        getchar();

        printf("\nPodaj litere:");
        scanf("%c", &guess);

        int is_letter_good = 0;

        for(int i = 0; i < strlen(text); i++)
        {
            if(text[i] == guess) is_letter_good = 1;
        }

        if(is_letter_good == 1)
        {
            for(int i = 0; i < strlen(text); i++)
            {
                if(text[i] == guess)
                {
                    printf("%c", guess);
                }
                else if(text[i] == ' ')
                {
                    printf(" ");
                }
                else
                {
                    printf("_");
                }
            }
        }

        if(is_letter_good == 0)
        {
            lives--;
            printf("Stracono 1 zycie, pozostalo %d", lives);

            if(lives == 0)
            {
                printf("przegrales");
                break;
            }
        }

        if(is_letter_good == 1)
        {
            getchar();
            printf("\nsprobuj zgadnac haslo:");
            scanf("%100[^\n]", guessed);

            int is_guessed_good = 1;

            for(int i = 0; i < strlen(text); i++)
            {
                if(text[i] != guessed[i]) is_guessed_good = 0;
            }

            if(is_guessed_good == 1)
            {
                printf("zgadles haslo");
                break;
            }
            else
            {
                printf("to nie jest poprawne haslo");
            }
        }
    }
}