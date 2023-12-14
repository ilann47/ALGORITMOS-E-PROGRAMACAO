/*
7- Faça um programa que leia uma string tamanho 50. Depois da leitura, 
o programa deverá separar todas as palavras e imprimir na tela com o tamanho de cada uma.

Esta frase eh um exemplo

Esta 4

Frase 5

Eh 2

Um 2

Exemplo 7
*/
#include <stdio.h>
#include <string.h>

int main() {
    char string[50];
    printf("Digite uma frase:\n");
    gets(string);


    if (strlen(string) > 0 && string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    char *token = strtok(string, " ");
    while (token != NULL) {
        printf("%s %zu\n", token, strlen(token));
        token = strtok(NULL, " ");
    }

    return 0;
}