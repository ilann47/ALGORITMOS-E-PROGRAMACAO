/*
2) - Multiplicação de Matrizes:

Crie um programa que realiza a multiplicação de duas matrizes (4,5) x (5,6) e exibe o resultado.

A multiplicação de duas matrizes é um procedimento que envolve calcular os produtos escalares entre os elementos das linhas de uma matriz pelo elementos das colunas da outra matriz. Para realizar a multiplicação de duas matrizes A e B, onde A tem dimensão (m x n) e B tem dimensão (n x p), o resultado C terá dimensão (m x p).


*/

void main()
{
    int mat1[4][5], mat2[5][6], mat3[4][6], i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            mat1[i][j] = 0;
            mat2[i][j] = 0;
            mat3[i][j] = 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (k = 0; k < 5; k++)
        {
            for (j = 0; j < 6; j++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 6; j++)
        {
            printf("%d \t", mat3[i][j]);
        }
    }
}