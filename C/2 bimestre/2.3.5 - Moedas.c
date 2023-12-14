#include <stdio.h>

// Função para calcular o valor total em reais
double calcularTotalEmReais(int n1, int n2, int n3, int n4, int n5, int n6) {
    double total = n1 * 1.0 + n2 * 0.5 + n3 * 0.25 + n4 * 0.10 + n5 * 0.05 + n6 * 0.01;
    return total;
}

int main() {
    int n1, n2, n3, n4, n5, n6;

    // Solicita ao usuário a quantidade de moedas
    printf("Digite a quantidade de moedas de 1 real: ");
    scanf("%d", &n1);

    printf("Digite a quantidade de moedas de 50 centavos: ");
    scanf("%d", &n2);

    printf("Digite a quantidade de moedas de 25 centavos: ");
    scanf("%d", &n3);

    printf("Digite a quantidade de moedas de 10 centavos: ");
    scanf("%d", &n4);

    printf("Digite a quantidade de moedas de 5 centavos: ");
    scanf("%d", &n5);

    printf("Digite a quantidade de moedas de 1 centavo: ");
    scanf("%d", &n6);

    // Chama a função para calcular o total em reais
    double totalEmReais = calcularTotalEmReais(n1, n2, n3, n4, n5, n6);

    // Imprime o resultado
    printf("O valor total em reais no cofrinho é: R$ %.2f\n", totalEmReais);

    return 0;
}
