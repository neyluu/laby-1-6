#include <stdio.h>

int main()
{
    float temp;

    printf("podaj temp w celciusach");
    scanf("%f", &temp);

    printf("F = %.2f\n", (temp * 1.8) + 32);
    printf("K = %.2f\n", temp + 273.15);
    printf("N = %.2f\n", temp * 33/100);
}