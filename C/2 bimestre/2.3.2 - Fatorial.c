#include <stdio.h>

// Função para calcular o fatorial de um número N
int calcularFatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // O fatorial de 0 e 1 é 1
    }
    else
    {
        return n * calcularFatorial(n - 1); // Fatorial de N = N * (N-1)!
    }
}

int main()
{
    int N;

    // Solicita ao usuário o valor de N
    printf("Digite o valor de N para calcular o fatorial: ");
    scanf("%d", &N);

    // Verifica se o número é não-negativo
    if (N < 0)
    {
        printf("O fatorial não está definido para números negativos.\n");
    }
    else
    {
        // Chama a função calcularFatorial e imprime o resultado
        printf("%d! = %d\n", N, calcularFatorial(N));
    }

    return 0;
}
