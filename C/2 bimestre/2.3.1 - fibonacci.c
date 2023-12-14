
#include <stdio.h>

// Função para calcular e imprimir os N primeiros termos da série de Fibonacci
void fib(int n)
{
    int termo1 = 0, termo2 = 1, proximoTermo;

    printf("Os primeiros %d termos da serie de Fibonacci sao:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", termo1);
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }
    printf("\n");
}

int main()
{
    int N;

    // Solicita ao usuário o valor de N
    printf("Digite o valor de N para a serie de Fibonacci: ");
    scanf("%d", &N);

    // Chama a função fib com o valor fornecido
    fib(N);

    return 0;
}