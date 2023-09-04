//
// 5- Faça um programa que leia uma string tamanho
// 20 e inverte a primeira letra da string com a última. O programa deve escrever a string normal e alterada.

#include <stdio.h>
#include <string.h>
#define TF 20

void main()
{
    char string[TF], temp;
    gets(string);
    temp = string[0];
    string[0] = string[strlen(string) - 1];
    string[strlen(string) - 1] = temp;
    puts(string);
}
