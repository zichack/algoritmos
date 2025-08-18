#include <stdio.h>

int main ()

{
    double salario, aumento, perc, resultperc, resultado;
    printf("Informe o salario do funcionario: ");
    scanf("%lf", &salario);
    printf("Informe o percentual de reajuste: ");
    scanf("%lf", &perc);
    resultperc = perc / 100;
    aumento = salario * resultperc;
    resultado = salario + aumento;
    printf("O salario reajustado eh: %.2lf\n", resultado);
    return 0;
}