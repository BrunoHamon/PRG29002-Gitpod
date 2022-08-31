#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double r1, r2, D;

    printf("Entre com os coeficientes: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    D = b*b - 4 * a * c;

    printf("%lg\n", D);

    if (a == 0) {
    printf("Entrada inválida\n");
    } else if (b == 0) {
    printf("2 raízes imaginárias\n");

    } else if (D < 0) {
    printf("2 raízes complexas\n");

    } else if (D == 0) {
    printf("1 raiz real: ");
    r1 = -b / (2 * a);
    printf("%lg\n", r1);
    } else {
    printf("2 raízes reais: ");
    r1 = (-b + sqrt(D)) / (2 * a);
    r2 = (-b - sqrt(D)) / (2 * a);
    printf("%lg, %lg\n", r1, r2);
    }

    return 0;
}#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double r1, r2, D;

    printf("Entre com os coeficientes: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    D = b*b - 4 * a * c;

    printf("%lg\n", D);

    if (a == 0) {
    printf("Entrada inválida\n");
    } else if (D < 0) {
        if (b == 0) {
        printf("2 raízes imaginárias: ");
        r1 = +sqrt(4 * a * c) / (2 * a);
        r2 = -sqrt(4 * a * c) / (2 * a);
        printf("%lgi, %lgi\n", r1, r2);
        } else {
        printf("2 raízes complexas: ");
        r1 = +sqrt(4 * a * c) / (2 * a);
        printf("%lg+j%lg, %lg-j%lg\n", (-b / 2 * a), r1, (-b / 2 * a), r1);
        }
    } else if (D == 0) {
    printf("1 raiz real: ");
    r1 = -b / (2 * a);
    printf("%lg\n", r1);
    } else {
    printf("2 raízes reais: ");
    r1 = (-b + sqrt(D)) / (2 * a);
    r2 = (-b - sqrt(D)) / (2 * a);
    printf("%lg, %lg\n", r1, r2);
    }

    return 0;
}
