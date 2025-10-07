#include <stdio.h>
#include <stdlib.h>

int main()
{
    double racao, gato1, gato2, soma;
    printf("Informe o peso do saco de racao:\n");
    scanf("%lf", &racao);
    printf("Informe a porcao do gato 1:\n");
    scanf("%lf", &gato1);
    printf("Informe a porcao do gato 2:\n");
    scanf("%lf", &gato2);
    soma = racao - (gato1 + gato2)*5;
    printf("Apos 5 dias, restara %.2lf Kg no saco de racao", soma);
    return 0;
}
