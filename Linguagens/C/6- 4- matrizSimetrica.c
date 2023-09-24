/*
4) Identificação de Matriz Simétrica:

Escreva um programa que verifica se uma matriz 5 x 5 é simétrica ou não.

Uma matriz simétrica é uma matriz quadrada (ou seja, o número de linhas é igual ao número de colunas)
que é igual à sua própria transposta. Em outras palavras, uma matriz A é simétrica se, e somente se, a matriz transposta de A é igual a A.


*/

void main()
{
    int matriz[5][5], i, j, matriztransposta[5][5], matrizSimetrica = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriztransposta[j][i] = matriz[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriztransposta[i][j] != matriz[i][j])
            {
                matrizSimetrica = 0;
                break;
            }
        }
        if (!matrizSimetrica)
        {
            break;
        }
    }
    if (matrizSimetrica)
    {
        printf("Simetrico\n");
    }
    else
    {
        printf("Nao Simetrica\n");
    }

    return 0;
}
