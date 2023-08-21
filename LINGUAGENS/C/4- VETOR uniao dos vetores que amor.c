#include <stdio.h>
#include <math.h>

void main()
{
    int vet1[10], vet2[10], vet3[20], i = 0, a = 0, b = 0, numero = 0;
    for (i = 0; i < 10; i++)
    {
        numero++;
        printf("Numero: vet1: %d\n", numero);
        scanf("%d", &vet1[i]);
    }
    numero = 0;
    for (i = 0; i < 10; i++)
    {
        numero++;
        printf("Numero: vet2: %d\n", numero);
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 10; i++)
    {
        vet3[i] = vet1[i];
        vet3[i+10] = vet2[i];
    }
    for(i=0 ;i<20;i++)
    {
        for (b = i + 1; b < 20; b++)
        {
            if (vet3[i] == vet3[b])
                vet3[i] = 0;
        }
    }
    for (i = 0; i < 20; i++)
    {
        if ( vet3 [i] != 0)
            printf("%d ", vet3[i]);
    }

}
