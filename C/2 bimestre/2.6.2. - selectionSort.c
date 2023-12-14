#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;

        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[] = {3, 4, 9, 2, 5, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Selection Sort:\n");
    selectionSort(arr, n);

    return 0;
}
