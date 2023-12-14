#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CIDADES 5

// Função para calcular a quantidade de combustível necessária para um percurso
float calcularCombustivel(float distancia, float consumo) {
    return distancia / consumo;
}

int main() {
    char cidades[NUM_CIDADES][50];
    float distancias[NUM_CIDADES][NUM_CIDADES];
    float consumo;
    
    // Inicializar as cidades
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Digite o nome da cidade %d: ", i + 1);
        scanf("%s", cidades[i]);
    }
    
    // Inicializar as distâncias com zero na diagonal principal
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (i == j) {
                distancias[i][j] = 0.0;
            } else {
                printf("Digite a distancia entre %s e %s: ", cidades[i], cidades[j]);
                scanf("%f", &distancias[i][j]);
            }
        }
    }
    
    // Obter o consumo de combustível
    printf("Digite o consumo de combustivel (km/l): ");
    scanf("%f", &consumo);
    
    printf("Percursos que nao ultrapassam 250 quilometros:\n");
    
    // Encontrar percursos com menos de 250 km
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (i != j && distancias[i][j] <= 250) {
                printf("(%s -> %s)\n", cidades[i], cidades[j]);
            }
        }
    }
    
    // Obter o percurso escolhido pelo usuário
    int origem, destino;
    printf("Digite o percurso (origem, destino): ");
    scanf("%d %d", &origem, &destino);
    
    if (origem < 1 || origem > NUM_CIDADES || destino < 1 || destino > NUM_CIDADES || origem == destino) {
        printf("Percurso invalido!\n");
    } else {
        origem--;
        destino--;
        float distancia = distancias[origem][destino];
        float combustivel = calcularCombustivel(distancia, consumo);
        printf("Percurso: %s -> %s\n", cidades[origem], cidades[destino]);
        printf("Distancia: %.2f km\n", distancia);
        printf("Combustivel necessario: %.2f litros\n", combustivel);
    }
    
    return 0;
}
