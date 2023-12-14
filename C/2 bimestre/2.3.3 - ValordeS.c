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

// Função para calcular o valor de S
double calcularS(int N)
{
    double S = 0.0;

    for (int i = 1; i <= N; i++)
    {
        S += (double)calcularFatorial(i - 1) / (double)calcularFatorial(i);
    }

    return S;
}

int main()
{
    int N;

    // Solicita ao usuário o valor de N
    printf("Digite o valor de N para calcular S: ");
    scanf("%d", &N);

    // Verifica se o número é não-negativo
    if (N < 0)
    {
        printf("N deve ser um numero nao-negativo.\n");
    }
    else
    {
        // Chama a função calcularS e imprime o resultado
        double resultadoS = calcularS(N);
        printf("O valor de S para N=%d e: %.4f\n", N, resultadoS);
    }

    return 0;
}
