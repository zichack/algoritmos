#include <stdio.h>
#include <stdlib.h>

int main()
{
    double angulo, seno, cosseno, tangente;
    printf("informe o valor do angulo: ");
    scanf("%lf", &angulo);
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);
    printf("Seno: %.2lf\n", seno);
    printf("Cosseno: %.2lf\n", cosseno);
    printf("Tangente: %.2lf\n", tangente);
    return 0;
}
