#include <stdio.h>
#include <stdlib.h>

int main()
{
    char conc;
    printf("Informe o conceito: ");
    scanf("%c", &conc );
    switch(conc){
    case 'A':{
        printf("Excelente");
        break;
    }
    case 'B':{
        printf("Bom");
        break;
    }
    case 'C':{
        printf("Regular");
        break;
    }
    case 'D':{
        printf("Reprovado");
        break;
    }
    default: printf("Valor invalido!");
        break ;
    }
    return 0;
}
