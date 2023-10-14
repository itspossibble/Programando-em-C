#include <stdio.h>

int main() {
    float peso, altura, imc;

    
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

   
    imc = peso / (altura * altura);

    
    printf("Seu IMC é: %.2f\n", imc);

    
    if (imc < 18.5)
        printf("Classificacao: Abaixo do peso\n");
    else if (imc < 24.9)
        printf("Classificacao: Peso normal\n");
    else if (imc < 29.9)
        printf("Classificacao: Sobrepeso\n");
    else if (imc < 34.9)
        printf("Classificacao: Obesidade Grau I\n");
    else if (imc < 39.9)
        printf("Classificacao: Obesidade Grau II\n");
    else
        printf("Classificacao: Obesidade Grau III\n");

    return 0;
}
