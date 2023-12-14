//parece que algo esta errado aqui
#include <stdio.h>
#include <math.h>

void main()
{
    int vet[10], b = 0, i = 0, a = 0, numero = 0;
    for (b = 0; b < 10; b++)
    {
        numero++;
        printf("Numero: %d\n", numero);
        scanf("%d", &vet[b]);
    }
    printf("Os valores que se repetem sao: \n");
    for (i = 0; i < 10; i++)
    {
        for (a = 0; a < 10; a++)
        {
            if (vet[i] == vet[a])
                printf("%d \n", vet[a]);
                break;
        }
    }
}