#include <stdio.h>

// Função para trocar os valores de duas variáveis
void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de ordenação por Selection Sort
void selectionSort(int arr[], int n)
{
    // Itera sobre todos os elementos do array
    for (int i = 0; i < n - 1; i++)
    {
        // Encontra o menor elemento no restante do array e troca com o elemento atual
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                trocar(&arr[i], &arr[j]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Chama a função de ordenação
    selectionSort(arr, n);

    // Imprime o array ordenado
    printf("Array ordenado: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
