#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    if(soma > 10){
        printf("O resultado da soma eh: %d\n", soma);
    }
    else{
        printf("Soma menor que 10");
    }
    return 0;
}
