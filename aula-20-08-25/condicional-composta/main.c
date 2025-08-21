#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if(num > 0){
        printf("O numero eh positivo!");
    }
    else{
        printf("O numero eh negativo!");
    }
    return 0;
}
