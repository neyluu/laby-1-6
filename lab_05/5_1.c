#include <stdio.h>
#include <string.h>

int main()
{
    char text[101];

    printf("podaj tekst");
    scanf("%100[^\n]", text);

    printf("Podany przez ciebie napis to:\n%s\n", text);

    int a = 0, e = 0, o = 0, u = 0, i = 0;

    for(int j = 0; j < strlen(text); j++)
    {
        switch (text[j]) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            case 'i':
                i++;
                break;
        }
    }

    printf("litera: a wystepuje %d\n", a);
    printf("litera: e wystepuje %d\n", e);
    printf("litera: o wystepuje %d\n", o);
    printf("litera: u wystepuje %d\n", u);
    printf("litera: i wystepuje %d\n", i);
}