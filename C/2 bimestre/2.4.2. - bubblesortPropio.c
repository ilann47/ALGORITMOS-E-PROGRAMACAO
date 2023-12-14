#include <stdio.h>
// Aqui define os tamanhos fisicos que serao utilizados nos vetores e os tamanhos logicos que serao utilizados desses vetores.
#define TL 10
#define TF 100

void main()
{
    // declarando suas variaveis.
    int i, j, vet1[TF];

    printf("Quais são os valores que deseja organizar.\n");
    // Le os valores que serao colocados nos indices do vetor.
    for (i = 0; i < TL; i++)
    {
        printf("\nValor %d:\n", i + 1);
        scanf("%d", &vet1[i]);
    }
    // primeiro laco de repeticao for usando o tamanho total menos 1
    for (i = 0; i < TL - 1; i++)
    {
        // segundo laco de repeticao para verificar se a posicao atual e menor que as proximas usando Tl - i - 1 para condicao
        for (j = 0; j < TL - i - 1; j++)
        {
            // verificacao da condicao, vet1 verificando se e maior que o segundo vetor na condicao com indice a frente
            if (vet1[j] > vet1[j + 1])
            {
                // bloco de codigo para realizar a troca dos valores caso condicao seja verdadeira
                int temp = vet1[j];
                vet1[j] = vet1[j + 1];
                vet1[j + 1] = temp;
            }
        }
    }
    // Escrever os valores ordenados.
    printf("\nValores ordenados:\n");
    for (i = 0; i < TL; i++)
    {
        printf("\n%d: %d", i + 1, vet1[i]);
    }
}
