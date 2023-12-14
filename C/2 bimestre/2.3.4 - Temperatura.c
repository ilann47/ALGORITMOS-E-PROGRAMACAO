#include <stdio.h>

// Função para converter temperatura de Fahrenheit para Celsius
double converterFahrenheitParaCelsius(double temperaturaFahrenheit)
{
    double temperaturaCelsius = (temperaturaFahrenheit - 32) * 5.0 / 9.0;
    return temperaturaCelsius;
}

int main()
{
    double temperaturaFahrenheit, temperaturaCelsius;

    // Solicita ao usuário a temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &temperaturaFahrenheit);

    // Chama a função para converter a temperatura
    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);

    // Imprime o resultado
    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);

    return 0;
}
