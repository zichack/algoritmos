#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anonasc, anoatual, idanos, idmeses, iddias;
    printf("Informe o ano de nascimento:\n");
    scanf("%d", &anonasc);
    printf("Informe o ano atual:\n");
    scanf("%d", &anoatual);
    idanos = anoatual - anonasc;
    idmeses = idanos*12;
    iddias = idanos*365;
    printf("Idade em anos: %d\n Idade em meses: %d\n Idade em dias: %d\n", idanos, idmeses, iddias);
    return 0;
}
