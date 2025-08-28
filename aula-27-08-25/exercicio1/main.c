#include <stdio.h>
#include <stdlib.h>

int main()
{
    double peso, altura, imc;
    printf("Informe o peso: ");
    scanf("%lf", &peso);
    printf("Informe a altura da pessoa: ");
    scanf("%lf", &altura);
    imc = peso/(altura*altura);
    printf("IMC: %.2lf\n", imc);
    if(imc < 18.5){
        printf("Magreza! \n");
    }
    else if(imc >= 18.5 && imc < 24.9){
        printf("Peso normal! \n");
    }
    else if(imc >= 25 && imc < 29.9){
        printf("Sobrepeso\n");
    }
    else{
        printf("Obesidade!\n");
    }
    return 0;
}
