/*Exemplo 2. O programa abaixo lê dados de alunos (nome e média) e
depois mostra os alunos
aprovados (média maior ou igual a 7).*/
#include <stdio.h>
// Cria as estruturas (registros)
struct aluno
{
    char nome[41];
    float media;
};
struct turma
{
    int quantidade;
    struct aluno lista[5];
};
main()
{
    // Cria as variáveis
    struct turma t1;
    int c;
    // Pergunta o número de alunos
    printf("Numero de alunos: ");
    scanf("%d", &t1.quantidade);
    // Preeche os dados dos alunos
    for (c = 0; c < t1.quantidade; c++)
    {
        printf("\nAluno %i\n", c + 1);
        printf("Nome:");
        scanf(" %s", &t1.lista[c].nome);
        printf("Média:");
        scanf("%f", &t1.lista[c].media);
    }
    // Mostra os alunos aprovados
    printf("\nLista de Aprovados:\n\n");
    for (c = 0; c < t1.quantidade; c++)
    {
        if (t1.lista[c].media >= 7.0)
            printf("%s\n", t1.lista[c].nome);
    }
}
/*
Neste programa estamos criando duas estruturas.
Em outras linguagens as estruturas também
são chamadas de registros.
Cada estrutura é formada por uma série de campos. A primeira
estrutura, chamada de aluno, possui dois campos:
nome (que é uma string de 40 posições) e
media (que é um número real).
A segunda estrutura é chamada de turma e possui também dois campos:
quantidade (que é um inteiro)
e lista (que é um vetor de 5 elementos do tipo aluno).
O campo quantidade irá
conter o número de alunos que serão cadastrados na lista.
Esse número não pode ser maior
que 5 pois o vetor lista foi definido com esse tamanho
(que representa o número máximo de alunos que o programa pode cadastrar).
 Para manipular os dados,
 o programa cria a variável t1 do tipo struct turma.
 Essa variável conterá os dados da turma.
 Atenção: não confunda a estrutura turma com a variável t1.
  A variável t1 ocupa um espaço na memória do computador
enquanto que a estrutura turma é apenas uma definição (não é uma variável)

*/