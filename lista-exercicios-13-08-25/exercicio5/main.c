#include <stdio.h>

int main ()

{
    double real, dolar, div;
    printf("Informe o valor a ser convertido: ");
    scanf("%lf", &real);
    printf("Informe a cotacao atual do dolar: ");
    scanf("%lf", &dolar);
    div = real / dolar;
    printf("O valor convertido em dolar eh: %.2lf\n", div);
    return 0;
}