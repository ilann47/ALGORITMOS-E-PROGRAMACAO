#include <stdio.h>

// Função de partição para o QuickSort
int partition(float arr[], int menor, int maior)
{
    // Define o valor do pivô como o último elemento do array
    float tamanho = arr[maior];
    // Inicializa o índice do menor elemento
    int i = (menor - 1);

    // Percorre o array da posição menor até a posição anterior ao pivô
    for (int j = menor; j <= maior - 1; j++)
    {
        // Compara cada elemento com o pivô
        if (arr[j] >= tamanho)
        {
            // Incrementa o índice do menor elemento
            i++;
            // Troca os elementos arr[i] e arr[j]
            float temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Troca arr[i+1] e arr[maior] (o pivô)
    float temp = arr[i + 1];
    arr[i + 1] = arr[maior];
    arr[maior] = temp;

    // Retorna o índice da posição do pivô
    return (i + 1);
}

// Função QuickSort
void quickSort(float arr[], int menor, int maior)
{
    // Verifica se há mais de um elemento no array
    if (menor < maior)
    {
        // Encontra o índice de partição
        int pi = partition(arr, menor, maior);

        // Classifica os elementos separadamente antes e depois da partição
        quickSort(arr, menor, pi - 1);
        quickSort(arr, pi + 1, maior);
    }
}

int main()
{
    int n;

    // Obtém o número de notas do usuário
    printf("Digite o numero de notas: ");
    scanf("%d", &n);

    float notas[n];

    // Obtém as notas do usuário
    printf("Digite as notas:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &notas[i]);
    }

    // Aplica o QuickSort para organizar as notas
    quickSort(notas, 0, n - 1);

    // Exibe as notas ordenadas
    printf("\nNotas ordenadas (do maior para o menor):\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", notas[i]);
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
