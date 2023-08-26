// 3- Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice,
// colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
#include <stdio.h>
void main()
{
    int vet1[10], vet2[10], vet3[10], i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &vet1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &vet2[i]);
    }
    for (i = 0; i < 10; i++)
    {
        vet3[i] = vet1[i] * vet2[i];
        printf("%d ", vet3[i]);
    }
}
