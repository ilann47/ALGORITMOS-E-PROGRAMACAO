#include <stdio.h>

struct aluno
{
    char nome[40];
    float media;
};

struct turma
{
    int quantidade;
    struct aluno lista[5];
};
main()
{
    struct turma t1;
    int i;
    puts("numero de alunos: ");
    scanf("%d", &t1.quantidade);
    for (i = 0; i < t1.quantidade; i++)
    {
        printf("Aluno %i\n", i + 1);
        printf("Nome: ");
        scanf(" %s", &t1.lista[i].nome);
        printf("Media: ");
        scanf("%f", &t1.lista[i].media);
    }
    puts(" Lista de Aprovados: \n\n");
    for (i = 0; i < t1.quantidade; i++)
    {
        if (t1.lista[i].media >= 70)
            printf(" %s", t1.lista[i].nome);
    }
}
