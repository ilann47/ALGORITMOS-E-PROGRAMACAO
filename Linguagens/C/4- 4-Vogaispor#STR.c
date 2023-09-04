// 4 – Faça um programa que leia uma string e troque todas vogais por # e imprima a nova palavra.

#include <stdio.h>
#include <string.h>
#define TF 50
void main()
{
    char string[TF], i;
    gets(string);
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            string[i] = '#';
        }
    }
    for (i = 0; i < strlen(string); i++)
    {
        printf("%c", string[i]);
    }
}