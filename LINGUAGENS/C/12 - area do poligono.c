/*
3. Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um polígono regular e imprima o valor da área do polígono. Se o número de lados for diferente de 3, 4 ou 6 o programa deve informar: “não sei calcular a área”. 

(utilizar switch/case)

Áreas:

a.      Triângulo: A = L*L*1.73/4

b.      Quadrado: A = L*L

c.      Hexágono: A = 6*L*L*1.73/4;
*/

#include <stdio.h>

void main()
{
    float l, a;
    char tipo;
    scanf("%c",&tipo);
    switch (tipo)
    {
        case 'a':
        {
            scanf("%f",&l);
            a = l*l*1.73/4;
            break;
        }
        case 'b':
        {
            scanf("%f",&l);
            a = l*l;
            break;
        }   
        case 'c':
        {
            scanf("%f",&l);
            a = 6*l*l*1.73/4;
            break;
        }
        default:
            printf("Something is wrong\n");
    }
    printf("The area value is: %.2f",a);
}