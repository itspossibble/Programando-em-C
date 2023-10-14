#include <stdio.h>

int main() {
    float pesoAtual, pesoDesejavel, kilosPerdidos;

    printf("Digite seu peso atual em kg: ");
    scanf("%f", &pesoAtual);

    printf("Digite seu peso desejavel em kg: ");
    scanf("%f", &pesoDesejavel);

    kilosPerdidos = pesoAtual - pesoDesejavel;

    if (kilosPerdidos > 0) {
        printf("Voce precisa perder %.2f kg para atingir o peso desejavel.\n", kilosPerdidos);
    } else if (kilosPerdidos < 0) {
        printf("Voce precisa ganhar %.2f kg para atingir o peso desejavel.\n", -kilosPerdidos);
    } else {
        printf("Seu peso atual já é o peso desejável. Parabéns!\n");
    }

    return 0;
}
