//4- Dado um vetor de 10 inteiros, escreva um programa que imprima a soma de todos os múltiplos de 3 que estão contidos no vetor.
#include <stdio.h>
#define TF 10
int main() {
    int vetor[TF];
    int TL = 10;
    int soma = 0;
    int i;

    for ( i = 0; i < TL; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < TL; i++) {
        if (vetor[i] % 3 == 0) {
            soma += vetor[i];
        }
    }

    printf("A soma dos multiplos de 3 no vetor e: %d\n", soma);

    return 0;
}