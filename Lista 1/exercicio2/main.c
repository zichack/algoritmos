#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, aumento, soma;
    printf("Informe o salario:\n");
    scanf("%lf", &salario);
    printf("Informe o percentual de aumento:\n");
    scanf("%lf", &aumento);
    soma = salario + (salario*(aumento/100));
    printf("O valor do salario reajustado sera de: %.2lf\n", soma);
    return 0;
}
