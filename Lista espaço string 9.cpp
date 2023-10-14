#include <stdio.h>
#include <string.h>

void concatenarStrings(const char *str1, const char *str2, char *resultado) {
    strcpy(resultado, str1);
    strcat(resultado, str2);
}

int main() {
    char str1[100];
    char str2[100];
    char resultado[200];  

    
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    
    int len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n')
        str1[len1 - 1] = '\0';

   
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    
    int len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n')
        str2[len2 - 1] = '\0';

    
    concatenarStrings(str1, str2, resultado);

   
    printf("String resultante: %s\n", resultado);

    return 0;
}

