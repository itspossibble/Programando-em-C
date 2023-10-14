#include <stdio.h>
#include <string.h>

int substituirAporB(char *str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            str[i] = 'b';
            count++;
        }
    }

    return count;
}

int main() {
    char inputString[100];

    
    printf("Digite uma string: ");
    fgets(inputString, sizeof(inputString), stdin);

    
    int len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n')
        inputString[len - 1] = '\0';

    
    int numModificados = substituirAporB(inputString);

    
    printf("String modificada: %s\n", inputString);
    printf("Numero de caracteres modificados: %d\n", numModificados);

    return 0;
}


