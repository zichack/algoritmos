#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    if(num1 == num2){
        printf("Os numeros sao iguais!");
    }
    else{
        printf("Os numeros sao diferentes!");
    }
    return 0;
}
