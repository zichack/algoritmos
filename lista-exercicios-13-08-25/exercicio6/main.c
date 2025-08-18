#include <stdio.h>

int main ()

{
    double saco, porcao, porcao2, resultado;
    printf("Informe o peso do saco de racao: ");
    scanf("%lf", &saco);
    printf("Informe o peso da porcao de racao: ");
    scanf("%lf", &porcao);
    porcao2 = porcao * 2;
    resultado = saco - (porcao2 * 5);
    printf("Restou a seguinte quantidade de racao em Kg: %.2lf\n", resultado);
    return 0;

}