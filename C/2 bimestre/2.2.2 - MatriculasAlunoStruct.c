/*
2) Crie uma estrutura representando os alunos do curso de Métodos e Técnicas de Programação.

A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
nota da segunda  prova e nota da terceira prova.



(a) Permita ao usuário entrar com os dados de 5 alunos

(b) Encontre o aluno com maior nota da primeira prova

(c) Encontre o aluno com maior média geral

(d) Encontre o aluno com menor média geral

(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o  valor 6 para aprovação.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct alunos
{
    int matricula;
    char nome[50];
    int nota1;
    int nota2;
    int nota3;
};

struct curso
{
    struct alunos vetAlunos[5];
};

void main()
{
    int i = 0, media = 0, maiorNota1 = 0;
    float mediageral = 0, maiorMediageral = -999999, menorMediageral = 999999;
    char alunoMaiorNota1[50], alunoMaiormedia[50], alunoMenormedia[50];
    struct curso MTP;
    printf("Digite os dados dos 5 alunos:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("\nNome: \n");
        scanf(" %s", MTP.vetAlunos[i].nome);
        printf("Matricula: \n");
        scanf("%d", &MTP.vetAlunos[i].matricula);
        printf("Nota1: \n");
        scanf("%d", &MTP.vetAlunos[i].nota1);
        if (MTP.vetAlunos[i].nota1 > maiorNota1)
        {
            maiorNota1 = MTP.vetAlunos[i].nota1;
            strcpy(alunoMaiorNota1, MTP.vetAlunos[i].nome);
        }
        printf("Nota2: \n");
        scanf("%d", &MTP.vetAlunos[i].nota2);
        printf("Nota3: \n");
        scanf("%d", &MTP.vetAlunos[i].nota3);
        mediageral = (MTP.vetAlunos[i].nota1 + MTP.vetAlunos[i].nota2 + MTP.vetAlunos[i].nota3) / 3.0;
        if (mediageral > maiorMediageral)
        {
            maiorMediageral = mediageral;
            strcpy(alunoMaiormedia, MTP.vetAlunos[i].nome);
        }
        if (mediageral < menorMediageral)
        {
            menorMediageral = mediageral;
            strcpy(alunoMenormedia, MTP.vetAlunos[i].nome);
        }
        if (mediageral > 6)
        {
            printf("\nO aluno %s foi aprovado com %.2f de media geral\n", MTP.vetAlunos[i].nome, mediageral);
        }
    }
    printf("\nO aluno com maior Media geral foi: %s", alunoMaiormedia);
    printf("\nO aluno com menor Media geral foi: %s", alunoMenormedia);
    printf("\nO aluno com maior Nota na primeira prova foi: %s", alunoMaiorNota1);
}