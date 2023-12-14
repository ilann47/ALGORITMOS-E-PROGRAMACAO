#include <stdio.h>
#include <string.h>

void main()
{
    // definindo as variaveis
    int i, j, aux, tamanho;
    // lendo o tamanho que o vetor ira possuir.
    printf("Digite um valor para o tamanhpo do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    // aqui temos um bloco de codigo para poder ler os valor que estarao em todo o vetor.
    for (i = 0; i < tamanho; i++)
    {
        printf("Valor %d:", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tamanho; i++) // cria um laco de repeticao para poder andar no vetor
    {
        for (j = 0; j < tamanho; j++) // Cria outro laco de repeticao dentro de um laco de repeticao para poder andar em todos os indices comparando o mesmo indice.
        {
            if (vetor[i] > vetor[j]) // compara o indice se o valor que possui dentro dele e maior que o outro em que esta sendo comparado
            {                        // esse bloco de codigo serve para fazer a troca de valores e deixalos entao na ordem crescente com o metodo bubblesort
                aux = vetor[i];      // coloca o valor do indice i para uma variavel auxiliar deixando a variavel auxiliar com o mesmo valor do indice i, agora podemos trocar os valores do indice i
                vetor[i] = vetor[j]; // agora que o auxiliar possui o valor do indice i, vamos colocar o valor do indice j na qual passou na condicao para dentro do indice i
                vetor[j] = aux;      // aqui vamos colocar entao ja que agora o vetor de indice i possui o valor do indice j, podemos entao devolver o valor do aux que antes era do indice i para o indice j, conlcuindo assim a troca.
            }
        }
    }
    // esse bloco de codigo serve para poder escrever os novos valors, agora organizados de forma crescente pelo nosso metodo de bubblosort, para a tela do usuario.
    for (i = 0; i < tamanho; i++)
    {
        printf(" %d", vetor[i]);
    }
}