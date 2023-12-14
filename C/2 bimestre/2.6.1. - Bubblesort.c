#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Troca os elementos se estiverem na ordem errada
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Mostra a sequência atual
                for (int k = 0; k < n; k++)
                {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
    }
}

int main()
{
    int arr[] = {3, 4, 9, 2, 5, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Bubble Sort:\n");
    bubbleSort(arr, n);

    return 0;
}
