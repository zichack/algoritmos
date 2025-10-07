#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, soma;
    printf("Informe o salario:\n");
    scanf("%lf", &salario);
    soma = salario + (salario*0.25);
    printf("O valor do salario reajustado sera de: %.2lf\n", soma);
    return 0;
}
