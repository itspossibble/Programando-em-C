#include <stdio.h>
#include <string.h>

int contarVogais(const char *str) {
    int count = 0;

    
    while (*str) {
        char ch = *str;

        
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;  

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
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

   
    int numVogais = contarVogais(inputString);

    
    printf("O numero de vogais na string sera: %d\n", numVogais);

    return 0;
}
