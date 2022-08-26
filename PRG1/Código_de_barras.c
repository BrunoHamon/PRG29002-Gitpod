#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, v;

    printf("Entre com a primeira parte (1 digito): ");
    scanf("%1d", &n1);
    printf("Entre com a segunda parte (6 digitos): ");
    scanf("%1d%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6, &n7);
    printf("Entre com a terceira parte, sem o digito verificador (5 digitos): ");
    scanf("%1d%1d%1d%1d%1d", &n8, &n9, &n10, &n11, &n12);

    v = 9 - ((((n1 + n3 + n5 + n7 + n9 + n11) + 3 * (n2 + n4 + n6 + n8 + n10 + n12)) - 1) % 10);

    printf("Digito verificador: %d\n", v);

    return 0;
}