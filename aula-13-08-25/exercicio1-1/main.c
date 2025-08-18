#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num, quadrado, cubo;
    printf("Informe o numero: ");
    scanf("%lf", &num);
    quadrado = pow(num, 2);
    cubo = pow(num, 3);
    printf("O quadrado eh: %.2lf\n", quadrado);
    printf("O cubo eh: %.2lf\n", cubo);
    return 0;
}
