#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char strings[50] = "10,20,30,40";
    char *token = strtok(strings, ","); // Obtém o primeiro token
    int soma = 0;

    while (token != NULL) { // Enquanto houver tokens
        soma += atoi(token); // Converte para inteiro e soma
        token = strtok(NULL, ","); // Obtém o próximo token
    }

    printf("Soma dos tokens = %d\n", soma);

    return 0;
}
