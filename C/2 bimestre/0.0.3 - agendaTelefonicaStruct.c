/*
Lista de Exercícios
Os proximos exercícios estão baseados na seguinte estrutura:

t_pessoa                                   >       Tipo pessoa da agenda
nome    > String de 40 caracteres          >       Nome da pessoa
fone    > String de 20 caracteres          >       Telefone da pessoa

t_agenda                                   >       Tipo agenda
qtde    > Vetor de 100 elementos t_pessoa  >       Lista de pessoas na agenda
*/

// 1) Faça um programa para cadastrar o nome e o telefone de até 100 pessoas. Depois de
// cadastrar, mostre todas as pessoas e os telefones na forma de um relatório. -*-*-*-*-*-*-*/-*-*/-*-*

/// 2) Altere o programa 1 para que seja pedido um nome e mostrado o telefone da pessoa
//(consulta).

/// 3) Altere o programa 1 para que os dados sejam mostrados em ordem alfabética do nome
//(ordenação).

// abcdefghijklmnopkrstuvwxyz

/// 4) Altere o programa 1 para que permita alterar o telefone de uma pessoa cadastrada. O
// programa deve perguntar o nome da pessoa, mostrar o telefone antigo e perguntar o telefone
// novo. Ao final, mostre todas as pessoas e os telefones na forma de um relatório (alteração).

// 5) Altere o programa 1 para que seja perguntado um novo nome e telefone para ser incluído
// na agenda. Ao final, mostre todas as pessoas e os telefones na forma de um relatório
//(inclusão).

// 6) Altere o programa 1 para que seja pedido o nome de uma pessoa e ela seja retirada da
////agenda (exclusão). Dica: crie uma nova agenda e transfira todas as pessoas para ela (menos a
// que você está procurando). Depois, traga de volta os dados para a agenda antiga e mostre
// todas as pessoas e os telefones na forma de um relatório.

// 7) Altere o programa 1, incluindo um campo chamado relacionamento em t_pessoa. Nesse
// campo cadastre o tipo de relacionamento (namoro, família, trabalho, amigo, etc...). Depois,
// pergunte um relacionamento e mostre um relatório com todos os nomes e telefones de
// pessoas que você cadastrou com aquele relacionamento (inclusão de campo).

// 8) Faça as alterações necessárias no programa 1 para que possam ser cadastrados até 10
// telefones para cada pessoa (alteração de campo).

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct t_pessoa
{
    char nome[40];
    char fone[20];
};

struct t_agenda
{
    struct t_pessoa qtde[100];
};

void main()
{
    struct t_agenda ag1;
    int i, quantidade = 0, menu = 0;
    printf("Quantas pessoas serao cadastradas na agenda?:  ");
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        printf("Pessoa: %d\n", i + 1);
        puts("Nome: ");
        scanf(" %s", &ag1.qtde[i].nome);

        puts("Fone: ");
        scanf(" %s", &ag1.qtde[i].fone);
    }
    // MENU
    printf("Menu\n");
    puts("0 - Sair");
    puts("1 - Relatorio");
    puts("2 - Consulta\n> ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("\nRELATORIO DA AGENDA\n");
        for (i = 0; i < quantidade; i++)
        {
            printf("%s -", ag1.qtde[i].nome);
            printf(" %s\n", ag1.qtde[i].fone);
        }
        break;
    case 2:
        char aux[40];
        printf("Qual o nome que voce deseja consultar o numero de telefone: ");
        scanf(" %s", aux);
        for (i = 0; i < quantidade; i++)
        {
            if (strcmp(ag1.qtde[i].nome, aux) == 0)
                printf("Fones para %s: \n%s", ag1.qtde[i].nome, ag1.qtde[i].fone);
            else
                printf("vishe nao achei nada tche");
        }

        break;
    default:
        printf("Algo de errado nao esta certo");
        break;
    }
}