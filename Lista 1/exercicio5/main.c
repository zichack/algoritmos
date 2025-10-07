#include <stdio.h>
#include <stdlib.h>

int main()
{
    double real, dolar, mult;
    printf("Informe o valor em real:\n");
    scanf("%lf", &real);
    printf("Informe a cotacao do dolar:\n");
    scanf("%lf", &dolar);
    mult = real / dolar;
    printf("O valor do real convertido em dolar eh de: %.2lf\n", mult);
    return 0;
}
