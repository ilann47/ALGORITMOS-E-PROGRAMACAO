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
    int i, j, menor;

    // Itera sobre todos os elementos do array
    for (i = 0; i < n - 1; i++)
    {
        // Assume que o elemento atual é o menor
        menor = i;

        // Itera sobre os elementos não ordenados
        for (j = i + 1; j < n; j++)
        {
            // Se o elemento atual for menor que o menor encontrado até agora
            if (arr[j] < arr[menor])
            {
                // Atualiza a posição do menor elemento
                menor = j;
            }
        }

        // Troca o elemento atual com o menor encontrado
        trocar(&arr[i], &arr[menor]);
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
