#include <stdio.h>

int main()
{
    float f, c;

    printf("Entre com a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * (5.0 / 9);

    printf("Temperatura em Celsius: %.1f\n", c);

    return 0;
}