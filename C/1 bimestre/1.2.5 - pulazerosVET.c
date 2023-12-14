#include <stdio.h>


void main()
{
    int vet[15], i = 0, numero = 0;
    for (i = 0; i < 15; i++)
    {
        numero++;
        printf("Numero: %d\n", numero);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i<15; i++)
    {
        if( vet[i] != 0)
            printf("%d ", vet[i]);
    }
}