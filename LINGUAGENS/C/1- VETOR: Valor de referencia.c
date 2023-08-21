
#include <stdio.h>
#include <math.h>

void main()
{
    int vet[10], i = 0, referencia = 0, menores = 0, qntref = 0, numero = 0;
    for (i = 0; i < 10; i++)
    {
        numero++;
        printf("Numero: %d\n", numero);
        scanf("%d", &vet[i]);
    }
    printf("\nValor de referencia: \n");
    scanf("%d", &referencia);
    printf("Numeros maiores que o numero de referencia: ");
    for (i = 0; i < 10; i++)
    {
        if (vet[i] > referencia)
            printf("%d ", vet[i]);
        if (vet[i] < referencia)
        {
            menores++;
        }
        if (vet[i] == referencia)
        {
            qntref++;
        }
    }
    printf("\nQuantidade de numeros menores que o numero de referencia: %d", menores);
    printf("\nQuantidade de vezes que o numero de referencia aparece no vetor: %d", qntref);
}
