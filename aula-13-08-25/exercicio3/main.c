#include <stdio.h>

int main ()

{
    int nasc, atual, idmeses, iddias;
    printf("Informe o ano de nascimento: ");
    scanf("%d", &nasc);
    printf("Informe o ano atual: ");
    scanf("%d", &atual);
    idmeses = (atual - nasc) * 12;
    iddias = (atual - nasc) * 365;
    printf("A idade em meses eh: %d\n", idmeses);
    printf("A idade em dias eh: %d\n", iddias);
    return 0;
}