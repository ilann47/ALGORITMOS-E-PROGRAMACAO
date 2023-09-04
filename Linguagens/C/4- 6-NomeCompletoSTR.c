// 6- Faça um programa que leia um nome e um sobrenome de uma pessoa separadamente. O programa deve
// juntar as duas strings em uma só e escrever na tela: a nova string, o número de caracteres, a primeira e a última letra.\

#include <stdio.h>
#include <string.h>

void main()
{
    char PrimeiroNome[50], SegundoNome[50], NomeCompleto[200];
    gets(PrimeiroNome);
    strcat(NomeCompleto, PrimeiroNome);
    gets(SegundoNome);
    strcat(NomeCompleto, " ");
    strcat(NomeCompleto, SegundoNome);
    puts(NomeCompleto);
}