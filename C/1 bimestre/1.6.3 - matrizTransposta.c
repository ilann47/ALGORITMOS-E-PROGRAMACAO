/*
3) Transposição de Matriz:

Implemente um programa para calcular a transposta de uma matriz.

A matriz transposta de uma matriz dada é obtida trocando as linhas pelas colunas e as colunas pelas linhas da matriz original. Em outras palavras, os elementos que estavam nas linhas da matriz original serão movidos para as colunas da matriz transposta e vice-versa.

A notação comum para representar a matriz transposta de uma matriz A é A^T.

Por exemplo, se você tiver a seguinte matriz A:

A = | 1  2  3 |

      | 4  5  6 |

A matriz transposta A^T será:

A^T = | 1  4 |

          | 2  5 |

          | 3  6 |

*/

#include <stdio.h>
#define TF 4
#define TL1 TF
#define TL2 TF

void main()
{
    int A[TF][TF], i, j;
    for (i = 0; i < TL1; i++)
    {
        for (j = 0; j < TL2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < TL1; i++)
    {
        printf("\n");
        for (j = 0; j < TL2; j++)
        {
            printf("%d \t", A[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < TL1; i++)
    {
        printf("\n");
        for (j = 0; j < TL2; j++)
        {
            printf("%d \t", A[j][i]);
        }
    }
}