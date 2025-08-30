#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, num, soma = 0;
    while(cont <=10){
        printf("Informe o %d º numero: ", cont);
        scanf("%d", &num);
        soma += num;
        cont++;
    }
    printf("A soma dos numeros eh: %d.", soma);
    return 0;
}
