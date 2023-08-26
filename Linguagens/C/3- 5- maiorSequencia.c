/*
5- Determine o tamanho T da maior sequência de números iguais em um vetor A de tamanho 10. 



Exemplo: Supor que sejam digitados os seguintes valores para A: 1 2 6 6 7 7 7 7 1 1 , então T = 4*/

#include <stdio.h>
#define TF 10
#define TL1 10
#define TL2 10

void main()
{
    int i, a, vet[TF], T = 0, maiorT = -99999, Ttemp = 0;
    for (i = 0; i < TL1; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (i = 1; i < TL1; i++)
    {
        for ( a = 0; a < TL2; a++)
        {
            if ( vet[i] == vet[a] )
                T++;
            else if ( vet[i] != vet[a])
            {
                Ttemp = T;
                T = 0;
                if ( Ttemp > maiorT )
                    maiorT = Ttemp;
            }

        }
    }
    printf("T = %d ", maiorT);
}