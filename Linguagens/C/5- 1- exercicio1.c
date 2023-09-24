#include <stdio.h>

int main() {
    char gabarito[10], respostas[20][10]; 
    int resultados[20]; 


    printf("Informe o gabarito (10 respostas a, b, c ou d): ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &gabarito[i]);
    }
    for (int i = 0; i < 20; i++) {
        printf("Informe as respostas do aluno %d (10 respostas a, b, c ou d): ", i + 1);
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &respostas[i][j]);
        }
    }

    for (int i = 0; i < 20; i++) {
        int pontuacao = 0;
        for (int j = 0; j < 10; j++) {
            if (respostas[i][j] == gabarito[j]) {
                pontuacao++;
            }
        }
        resultados[i] = pontuacao;
    }

    printf("\nResultados dos alunos:\n");
    for (int i = 0; i < 20; i++) {
        printf("Aluno %d: Pontuacao = %d\n", i + 1, resultados[i]);
    }

    return 0;
}
