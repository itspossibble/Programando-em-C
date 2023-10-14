#include <stdio.h>
#include <string.h>

void soletrarFrase(const char *frase) {
    int len = strlen(frase);

    for (int i = 0; i < len; i++) {
        if (frase[i] == ' ')
            printf("- ");
        else
            printf("%c- ", frase[i]);
    }
}

int main() {
    char inputFrase[100];

  
    printf("Digite uma frase: ");
    fgets(inputFrase, sizeof(inputFrase), stdin);

    
    int len = strlen(inputFrase);
    if (len > 0 && inputFrase[len - 1] == '\n')
        inputFrase[len - 1] = '\0';

  
    soletrarFrase(inputFrase);

    printf("\n");

    return 0;
}

