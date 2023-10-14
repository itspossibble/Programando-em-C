#include <stdio.h>

int main() {
    int anoNascimentoUsuario, anoNascimentoMae, anoNascimentoIrmao;

   
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNascimentoUsuario);

    
    printf("Digite o ano de nascimento da sua mae: ");
    scanf("%d", &anoNascimentoMae);

    
    printf("Digite o ano de nascimento do seu irmao (ou 0 se nao tiver): ");
    scanf("%d", &anoNascimentoIrmao);

    
    int diferencaIdadeUsuarioMae = anoNascimentoUsuario - anoNascimentoMae;

    
    int diferencaIdadeUsuarioIrmao = (anoNascimentoIrmao != 0) ? (anoNascimentoUsuario - anoNascimentoIrmao) : 0;

    
    printf("Diferenca de idade entre voce e sua mae: %d anos\n", diferencaIdadeUsuarioMae);
    if (anoNascimentoIrmao != 0) {
        printf("Diferenca de idade entre voce e seu irmao: %d anos\n", diferencaIdadeUsuarioIrmao);
    } else {
        printf("Nao foi fornecido o ano de nascimento do irmao.\n");
    }

    return 0;
}






