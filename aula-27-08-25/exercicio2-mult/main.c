#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, soma, div, mult, sub;
    int opcao;
    printf("Informe o primeiro numero: ");
    scanf("%lf", &n1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &n2);
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    printf("Escolha uma opcao de operacao: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:{
            soma = n1 + n2;
            printf("O resultado da soma eh: %.2lf\n", soma);
            break;
        }
        case 2:{
            sub = n1 - n2;
            printf("O resultado da subtracao eh: %.2lf\n", sub);
            break;
        }
        case 3:{
            div = n1 / n2;
            printf("O resultado da divisao eh: %.2lf\n", div);
            break;
        }
        case 4:{
            mult = n1 * n2;
            printf("O resultado da multiplicacao eh: %.2lf\n", mult);
            break;
        }
        default: printf("Valor invalido!");
    }
    return 0;
}
