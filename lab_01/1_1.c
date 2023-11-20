#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Podaj liczbe:");
    scanf("%d", &num1);

    printf("Podaj liczbe:");
    scanf("%d", &num2);

    int suma = num1 + num2;
    int roznica = num1 - num2;
    int mnozenie = num1 * num2;

    //wersja 1
    printf("suma: %d\nroznica: %d\nmnozenie: %d\n", suma, roznica, mnozenie);

    //wersja 2
    printf("suma: %d\nroznica: %d\nmnozenie: %d\n", num1 + num2, num1 - num2, num1 * num2);
}