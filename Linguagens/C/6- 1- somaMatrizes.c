/*
1) Soma de Matrizes:

Escreva um programa que recebe duas matrizes 4x4 e calcula a soma delas.

*/

void main()
{

    int mat1[4][4], mat2[4][4], i, j, matSoma[4][4], y = 0, x = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matSoma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matSoma[i][j]);
        }
    }
}
