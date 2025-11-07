#include <stdio.h>
#include <stdlib.h>

void registrar_status(){
    //ponteiro para o código de status (inteiro)
    int*status_code_ptr = NULL;
    printf("----1. Alocação para código de status---\n");
    status_code_ptr = malloc(sizeof(int));

    if(status_code_ptr==NULL){
        fprintf(stderr,"ERRO: Falha ao alocar memória para status code.\n");
    }
    //Atribuição de valor (simulando uma resposta de sucesso)
    // Usamos * para desreferenciar e atribuir 200 (OK)
    *status_code_ptr=200;
    printf("Memória alocada em: %p\n", (void*)status_code_ptr);
    printf("Status code registrado (usando*): %d\n", *status_code_ptr);

    //---------------------------------------------------------------
    
    printf("\n ------------- Liberação de recurso de memória-------------- \n");

    // libera a memória alocada
    free(status_code_ptr);
    status_code_ptr=NULL;
    printf("Status code processado. Memória liberada.\n");
}

int main (){
    registrar_status();
    return 0;
}