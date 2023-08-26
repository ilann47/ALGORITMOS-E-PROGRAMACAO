// 2- Escrever um programa para ler um vetor de 20 posições. Em seguida, trocar o primeiro elemento com o último,
// o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Imprimir o vetor após a troca.
#include <stdio.h>

void main()
{
    int vet[20], i = 0, temp;
    for (i = 0; i < 20; i++)
    {
        scanf("%d ", &vet[i]);
    }
    for (i = 0; i < 10; i++)
    {
        temp = vet[i];
        vet[i] = vet[19 - i];
        vet[19 - i] = temp;
    }
    for (i = 0; i < 20; i++)
    {
        printf("%d, ", vet[i]);
    }
    printf("Yes.");
}