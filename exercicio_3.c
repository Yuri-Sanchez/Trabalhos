/* Exerc�cio 7:
Escreva um programa em linguagem C que receba dois n�meros inteiros diferentes digitados pelo usu�rio e imprima o maior deles.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Digite o 1� n�mero: \n");
    scanf("%d", &num1);
    printf("Digite o 2� n�mero: \n");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("O n�mero %d � maior do que o %d", num1, num2);
    else
        printf("O n�mero %d � maior do que o %d", num2, num1);
    return 0;
}