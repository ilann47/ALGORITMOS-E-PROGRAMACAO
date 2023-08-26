// 1- Faça um programa que leia um vetor de 10 posições de números inteiros e
// divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor resultante após os cálculos.

#include <stdio.h>
void main()
{
    int vet[10], i = 0, maiorVet = -99999;
    float resultado;
    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &vet[i]);
        if (vet[i] > maiorVet)
        {
            maiorVet = vet[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        resultado = (float)vet[i] / maiorVet;
        printf("%f   ", resultado);
    }
}