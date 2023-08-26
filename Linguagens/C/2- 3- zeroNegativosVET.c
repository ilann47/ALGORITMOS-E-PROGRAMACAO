#include <stdio.h>
#include <math.h>

void main()
{
    int vet[10], i = 0, numero = 0, a = 0, b = 0;
    for (i = 0; i < 10; i++)
    {
        numero++;
        printf("Numero: %d\n", numero);
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vet[i] < 0 )
            vet[i] = 0;
        printf("%d ", vet[i]);
    }
}