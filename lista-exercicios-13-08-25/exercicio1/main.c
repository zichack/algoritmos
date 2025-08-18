#include <stdio.h>

int main ()

{
    double salario, aumento, resultado;
    printf("Informe o salario: ");
    scanf("%lf", &salario);
    aumento = salario * 0.25;
    resultado = salario + aumento;
    printf("O salario reajustado eh: %.2lf\n", resultado);
    return 0;
}