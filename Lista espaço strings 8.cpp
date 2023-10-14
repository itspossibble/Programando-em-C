#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int len = strlen(str);
    char temp;
    int i, j;

    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char inputString[51];  

    
    printf("Digite uma string (no maximo 50 caracteres): ");
    fgets(inputString, sizeof(inputString), stdin);

    
    int len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n')
        inputString[len - 1] = '\0';

    
    inverterString(inputString);

    
    printf("String invertida: %s\n", inputString);

    return 0;
}

