#include <stdio.h>
#include <string.h>

char paraMaiuscula(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    else
        return ch;
}

void capitalizarPrimeiraLetra(char *str) {
    int i, len;
    len = strlen(str);

    
    if (len > 0)
        str[0] = paraMaiuscula(str[0]);

    for (i = 1; i < len; i++) {
        
        if (str[i] == ' ' && i < len - 1)
            str[i + 1] = paraMaiuscula(str[i + 1]);
    }
}

int main() {
    char inputString[100];

    
    printf("Digite uma string: ");
    fgets(inputString, sizeof(inputString), stdin);

    
    capitalizarPrimeiraLetra(inputString);

    
    printf("String modificada: %s\n", inputString);

    return 0;
}

