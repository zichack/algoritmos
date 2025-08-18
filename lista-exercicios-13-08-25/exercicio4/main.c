#include <stdio.h>

int main ()

{
    char ent1, ent2, inv1, inv2;
    printf("Informe a entrada A: ");
    scanf("%c", &ent1);
    printf("Informe a entrada B: ");
    scanf(" %c", &ent2);
    inv1 = ent2;
    inv2 = ent1;
    printf("A saida A eh: %c\n", inv1);
    printf("A saida B eh: %c\n", inv2);
    return 0;
}