#include <stdio.h>
#include <string.h>

/*
2- Seja uma estrutura para descrever os livros de uma loja, contendo os seguintes campos:

título: string de tamanho 15

autor: string de tamanho 20

estilo: string de tamanho 10

código: inteiro

preço: real

*/
struct livro
{
    char titulo[15];
    char autor[20];
    char estilo[10];
    int codigo;
    float preco;
};
/*
a) Escrever a definição da estrutura livro

Seja o seguinte trecho de programa:

// declaração de variáveis  de livros

struct livro vetlivro[50];

// definição da menu:

printf( ”Digite I para incluir um livro. \n");

printf(“Digite L para listar o nome de todos os livros. \n");

printf(“Digite A para procurar livro por autor. \n");

printf(“Digite T para procurar livro por título. \n");

printf(“Digite E para procurar livro por estilo. \n");

printf(“Digite M para calcular a média de preço de todos os livros. \n");

printf(“ Digite S para sair \n");

}

b) Complementar o programa para  atender o menu acima.
*/

void incluirLivro(struct livro *livros, int *numLivros)
{
    if (*numLivros < 50)
    {
        printf("Digite o título do livro: ");
        scanf("%s", livros[*numLivros].titulo);

        printf("Digite o autor do livro: ");
        scanf("%s", livros[*numLivros].autor);

        printf("Digite o estilo do livro: ");
        scanf("%s", livros[*numLivros].estilo);

        printf("Digite o código do livro: ");
        scanf("%d", &livros[*numLivros].codigo);

        printf("Digite o preço do livro: ");
        scanf("%f", &livros[*numLivros].preco);

        (*numLivros)++;
        printf("Livro incluído com sucesso!\n");
    }
    else
    {
        printf("Limite de livros atingido.\n");
    }
}

void listarLivros(struct livro *livros, int numLivros)
{
    printf("Lista de todos os livros:\n");
    for (int i = 0; i < numLivros; i++)
    {
        printf("Título: %s\nAutor: %s\nEstilo: %s\nCódigo: %d\nPreço: %.2f\n\n",
               livros[i].titulo, livros[i].autor, livros[i].estilo, livros[i].codigo, livros[i].preco);
    }
}

void procurarPorAutor(struct livro *livros, int numLivros)
{
    char autorBusca[20];
    printf("Digite o autor a ser procurado: ");
    scanf("%s", autorBusca);

    for (int i = 0; i < numLivros; i++)
    {
        if (strcmp(livros[i].autor, autorBusca) == 0)
        {
            printf("Livro encontrado:\n");
            printf("Título: %s\nAutor: %s\nEstilo: %s\nCódigo: %d\nPreço: %.2f\n\n",
                   livros[i].titulo, livros[i].autor, livros[i].estilo, livros[i].codigo, livros[i].preco);
            return;
        }
    }

    printf("Nenhum livro encontrado para o autor %s.\n", autorBusca);
}

void procurarPorTitulo(struct livro *livros, int numLivros)
{
    char tituloBusca[15];
    printf("Digite o título a ser procurado: ");
    scanf("%s", tituloBusca);

    for (int i = 0; i < numLivros; i++)
    {
        if (strcmp(livros[i].titulo, tituloBusca) == 0)
        {
            printf("Livro encontrado:\n");
            printf("Título: %s\nAutor: %s\nEstilo: %s\nCódigo: %d\nPreço: %.2f\n\n",
                   livros[i].titulo, livros[i].autor, livros[i].estilo, livros[i].codigo, livros[i].preco);
            return;
        }
    }

    printf("Nenhum livro encontrado para o título %s.\n", tituloBusca);
}

void procurarPorEstilo(struct livro *livros, int numLivros)
{
    char estiloBusca[10];
    printf("Digite o estilo a ser procurado: ");
    scanf("%s", estiloBusca);

    for (int i = 0; i < numLivros; i++)
    {
        if (strcmp(livros[i].estilo, estiloBusca) == 0)
        {
            printf("Livro encontrado:\n");
            printf("Título: %s\nAutor: %s\nEstilo: %s\nCódigo: %d\nPreço: %.2f\n\n",
                   livros[i].titulo, livros[i].autor, livros[i].estilo, livros[i].codigo, livros[i].preco);
            return;
        }
    }

    printf("Nenhum livro encontrado para o estilo %s.\n", estiloBusca);
}

void calcularMediaPreco(struct livro *livros, int numLivros)
{
    if (numLivros > 0)
    {
        float somaPrecos = 0;
        for (int i = 0; i < numLivros; i++)
        {
            somaPrecos += livros[i].preco;
        }

        float media = somaPrecos / numLivros;
        printf("A média de preço de todos os livros é: %.2f\n", media);
    }
    else
    {
        printf("Não há livros para calcular a média.\n");
    }
}

int main()
{
    struct livro vetlivro[50];
    int numLivros = 0;
    char opcao;

    do
    {
        printf("Digite I para incluir um livro.\n");
        printf("Digite L para listar o nome de todos os livros.\n");
        printf("Digite A para procurar livro por autor.\n");
        printf("Digite T para procurar livro por título.\n");
        printf("Digite E para procurar livro por estilo.\n");
        printf("Digite M para calcular a média de preço de todos os livros.\n");
        printf("Digite S para sair.\n");

        scanf(" %c", &opcao);

        switch (opcao)
        {
        case 'I':
            incluirLivro(vetlivro, &numLivros);
            break;
        case 'L':
            listarLivros(vetlivro, numLivros);
            break;
        case 'A':
            procurarPorAutor(vetlivro, numLivros);
            break;
        case 'T':
            procurarPorTitulo(vetlivro, numLivros);
            break;
        case 'E':
            procurarPorEstilo(vetlivro, numLivros);
            break;
        case 'M':
            calcularMediaPreco(vetlivro, numLivros);
            break;
        case 'S':
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 'S');

    return 0;
}
