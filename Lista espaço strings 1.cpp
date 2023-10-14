#include <stdio.h>
#include <string.h>

int contarEspacosEmBranco(const char *str) {
    int count = 0;

   
    while (*str) {
        if (*str == ' ')
            count++;
        str++;
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

 
    int numEspacos = contarEspacosEmBranco(inputString);


    printf("O numero de espaços em branco na string sera: %d\n", numEspacos);

    return 0;
}
