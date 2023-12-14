/*
1- Seja uma estrutura para descrever os carros de uma determinada revendedora,
contendo os seguintes campos:

marca: string de tamanho 15

ano: inteiro

cor: string de tamanho 10

preço: real

a) Escrever a definição da estrutura carro.

b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.



Crie um menu para:

c) Definir um bloco de programa para ler o vetor vetcarros.

d) Definir um bloco de programa que receba um preço e imprima os carros
(marca, cor e ano) que tenham preço igual ou menor ao preço recebido.

e) Defina um bloco de programa que leia a marca de um carro e imprima as
informações de todos os carros dessa marca (preço, ano e cor).

f) Defina um bloco de programa que leia uma marca, ano e cor e informe se
existe ou não um carro com essas características. Se existir, informar o preço.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct carros
{
    char marca[15];
    char cor[10];
    float price;
    int ano;
};

struct concessionaria
{
    struct carros vetcarro[20];
};

void main()
{
    char marca[40];
    char cor[40];
    int achei = 0;
    int ano = 0;
    float preco = 0;
    int i, quantidade = 0, menu;
    struct concessionaria con1;
    do
    {
        printf("\n\nMENU\n");
        printf("0 - Sair do programa\n");
        printf("1 - Adicionar Informacao sobre a quantidade de carros que possuimos na concessionaria\n");
        printf("2 - Verificar carros que possuam preco igual ao inferior do inserido\n");
        printf("3 - Verificar carros que possuem a marca solicitada\n");
        printf("4 - Verificar se existe um mesmo carro com os mesmos atributos marca, ano e cor. E entao ver seu preco\n");

        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("\nQual a quantidade de carros que vamos adicionar a lista da concessionaria?\n");
            scanf("%d", &quantidade);
            for (i = 0; i < quantidade; i++)
            {
                if (con1.vetcarro[i].ano != 0)
                {
                    printf("Vehiculo %d\n", i + 1);
                    printf("Qual a marca do vehiculo?\n");
                    scanf(" %s", con1.vetcarro[i].marca);
                    printf("Qual o ano deste vehiculo?\n");
                    scanf("%d", &con1.vetcarro[i].ano);
                    printf("Qual a cor do vehiculo?\n");
                    scanf(" %s", con1.vetcarro[i].cor);
                    printf("Qual o preco deste vehiculo?\n");
                    scanf("%f", &con1.vetcarro[i].price);
                    achei = 1;
                }
            }
            if (achei == 0)
            {
                printf("A nossa concessionaria esta lotada");
            }
            break;
        case 2:
            printf("Preco: ");
            scanf("%f", &preco);
            printf("Carros que possuem precos inferiores ou iguais do inserido.");
            for (i = 0; i < quantidade; i++)
            {
                if (preco <= con1.vetcarro[i].price)
                {
                    printf("\nCarro %d", i + 1);
                    printf("\nMarca: %s", con1.vetcarro[i].marca);
                    printf("\nano: %d", con1.vetcarro[i].ano);
                    printf("\nCor: %s", con1.vetcarro[i].cor);
                    printf("\nPreco: %.2f", con1.vetcarro[i].price);
                    achei = 1;
                }
            }
            if (achei == 0)
            {
                printf("Nao foi encontrado nenhum carro com os valores inferiores ou iguais ao fornecidos");
            }
            break;
        case 3:
            printf("Marca: ");
            scanf(" %s", marca);
            printf("Carros que possuem a mesma marca: \n");
            for (i = 0; i < quantidade; i++)
            {
                if (strcmp(marca, con1.vetcarro[i].marca) == 0)
                {
                    printf("\nCarro %d", i + 1);
                    printf("\nMarca: %s", con1.vetcarro[i].marca);
                    printf("\nano: %d", con1.vetcarro[i].ano);
                    printf("\nCor: %s", con1.vetcarro[i].cor);
                    printf("\nPreco: %.2f", con1.vetcarro[i].price);
                    achei = 1;
                }
            }
            if (achei == 0)
            {
                printf("Nao foi encontrado nenhum carro com a marca solicitada");
            }
            break;
        case 4:
            printf("\nAno: ");
            scanf("%d", &ano);
            printf("\nCor: ");
            scanf(" %s", cor);
            printf("\nMarca: ");
            scanf(" %s", marca);
            for (i = 0; i < quantidade; i++)
            {
                if (strcmp(marca, con1.vetcarro[i].marca) == 0 && strcmp(cor, con1.vetcarro[i].cor) == 0 && ano == con1.vetcarro[i].ano)
                {
                    printf("Carro %d\n", i + 1);
                    printf("Preco: %f\n", con1.vetcarro[i].price);
                    achei = 1;
                }
            }
            if (achei == 0)
            {
                printf("Nao foi encontrado nenhum carro com as informacoes inseridas.\n");
            }
            break;
        default:
            break;
        }

    } while (menu != 0);
}