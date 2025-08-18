#include <stdio.h>
#include <stdlib.h>

int main()
{

   int numero ;

   printf("Informe um numero inteiro : ");
   scanf(" %d", &numero);
   printf("Numero informado foi o %d\n",numero);



   float decimal ;
   printf("Digite um numero decimal : ");
   scanf("%f", &decimal);
   printf("O numero decimal digitado foi %f\n", decimal);


   char nome[100];
   printf("Digite seu nome : ");
   scanf("%s", &nome);
   printf("O nome digitado foi %s\n", nome);

   char var1 ;
   printf("Informe um caracter : ");
   scanf(" %c", &var1);
   printf("O caracter digitado foi %c\n", var1);
   /////////////////////////////////////////////

   int num1 ;
   int num2;
   printf("Digite o numero 1 : ");
   scanf(" %d", &num1);

   printf("Digite o numero 2 : ");
   scanf(" %d", &num2);

   int soma = num1+num2;

   printf("A soma do numero 1 com o numero 2 e %d", soma);




    return 0;
}
