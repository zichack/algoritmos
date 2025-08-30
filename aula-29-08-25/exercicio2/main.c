#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 2, num, maior, menor;
    printf("Informe o 1º numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while(cont <= 9){
        printf("Informe o %dº numero: ", cont);
        scanf("%d", &num);
        if(num > maior){
            maior = num;
                    }
            else if(num < menor){
                    menor = num;
            }
        cont++;
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
