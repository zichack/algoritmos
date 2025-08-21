#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Informe um numero inteiro: \n");
    scanf("%d", &n);
    if(n > 0){
        printf("O numero eh positivo!");
    }
    if(n <= 0){
        printf("O numero eh nao-positivo!");
    }
    return 0;
}
