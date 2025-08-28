#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    double preco, preco_pag;
    printf("Informe o preço do produto: ");
    scanf("%lf", &preco);
    printf("1 - A vista, em dinheiro ou cheque\n");
    printf("2 - A vista no cartao\n");
    printf("3 - Em duas vezes sem juros\n");
    printf("4 - Em duas vezes com juros\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        preco_pag = preco - preco*0.1;
        printf("Valor a ser pago: %.2lf\n", preco_pag);
    }
    else if(opcao == 2){
        preco_pag = preco - preco*0.15;
        printf("Valor a ser pago: %.2lf\n", preco_pag);
    }
    else if(opcao == 3){
        preco_pag = preco / 2;
        printf("Valor a ser pago: %.2lf\n", preco_pag);
    }
    else if(opcao == 4){
        preco_pag = (preco + preco*0.1)/2;
        printf("Valor a ser pago: %.2lf\n", preco_pag);
    }
    else{
        printf("Opcao invalida!");
    }
    return 0;
}
