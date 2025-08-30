#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, num, somaP = 0, neg = 0;
    while(cont <=15){
            printf("Informe o %d º numero: ", cont);
            scanf("%d", &num);
            if(num >= 0){
                somaP = somaP + num; //somaP += num;
            }
            else{
                neg++; // neg = neg + 1;
            }
            cont++;
    }
    printf("Soma dos positivos: %d\n", somaP);
    printf("Quantidade de negativos: %d\n", neg);
    return 0;
}
