#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    if(num1 < num2){
        printf("Numeros em ordem crescente: %d, %d\n", num1, num2);
    }
    else{
        printf("Numeros em ordem crescente: %d, %d\n", num2, num1);
    }
    return 0;
}
