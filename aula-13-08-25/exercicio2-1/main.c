#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, mult, raiz;
    printf("Informe o primero numero: ");
    scanf("%lf", &num1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &num2);
    mult = num1 * num2;
    raiz = sqrt(mult);
    printf("A raiz quadrada da multiplicao eh: %.2lf\n", raiz);
    return 0;
}
