#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, div;
    printf("Informe um numero: ");
    scanf("%d", &n);
    div = n % 2;
    if(div == 0){
        printf("O numero eh par!");
    }
    if(div != 0){
        printf("O numero eh impar!");
    }
    return 0;
}
