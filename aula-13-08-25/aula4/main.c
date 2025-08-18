#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fabrica, dist, imposto, custo;
    printf("Informe o custo da fabrica: ");
    scanf("%lf", &fabrica);
    dist = fabrica * 0.28;
    imposto = fabrica * 0.45;
    custo = fabrica + dist + imposto;
    printf("O custo total eh: %.2lf\n", custo);
    return 0;

}
