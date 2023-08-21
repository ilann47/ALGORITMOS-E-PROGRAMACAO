/*
2. Fazer um programa que utilize switch / case e escreva uma data por extenso como está no exemplo abaixo:

           Exemplo:  9  8   –>  9 de agosto


*/


#include <stdio.h>


void main()
{
    printf("Qual o dia e o mes atual?: *utilizando o formato dd/mm* \n");
    int dia;
    int mes;
    scanf("%d/%d", &dia, &mes);
    switch (mes)
    {
    case 1:
        printf("%d de janeiro", dia);
        break;
    case 2:
        printf("%d de fevereiro", dia);
        break;
    case 3:
        printf("%d de março", dia);
        break;
    case 4:
        printf("%d de abril", dia);
        break;
    case 5:
        printf("%d de maio", dia);
        break;
    case 6:
        printf("%d de junio", dia);
        break;
    case 7:
        printf("%d de julho", dia);
        break;
    case 8:
        printf("%d de agosto", dia);
        break;
    case 9:
        printf("%d de setembro", dia);
        break;
    case 10:
        printf("%d de outubro", dia);
        break;
    case 11:
        printf("%d de novembro", dia);
        break;
    case 12:
        printf("%d de dezembro", dia);
        break;
        
    
    default:
        printf("Sua data esta com formato errado.");
        break;
    }
}