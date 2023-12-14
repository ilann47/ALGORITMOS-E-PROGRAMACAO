#include <stdio.h>

// Função para ordenar um array usando o algoritmo Insertion Sort
void insertionSort(int arr[], int n)
{
    // Loop externo para percorrer todo o array a partir do segundo elemento
    for (int i = 1; i < n; i++)
    {
        // Armazena temporariamente o valor do elemento atual
        int key = arr[i];
        // Inicializa o índice para comparar com elementos anteriores
        int j = i - 1;

        // Move os elementos do arr[0..i-1] que são maiores que key
        // para uma posição à frente de sua posição atual
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;

            // Mostra a sequência atual após cada movimentação
            for (int k = 0; k < n; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        // Insere o elemento key na posição correta
        arr[j + 1] = key;
    }
}

// Função principal (main) do programa
int main()
{
    // Array de exemplo
    int arr[] = {3, 4, 9, 2, 5, 1, 8};
    // Obtém o tamanho do array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Imprime uma mensagem indicando que está sendo usado o Insertion Sort
    printf("Insertion Sort:\n");
    // Chama a função insertionSort para ordenar o array
    insertionSort(arr, n);

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
