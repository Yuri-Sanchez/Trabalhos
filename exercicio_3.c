/* Exercício 7:
Escreva um programa em linguagem C que receba dois números inteiros diferentes digitados pelo usuário e imprima o maior deles.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Digite o 1° número: \n");
    scanf("%d", &num1);
    printf("Digite o 2° número: \n");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("O número %d é maior do que o %d", num1, num2);
    else
        printf("O número %d é maior do que o %d", num2, num1);
    return 0;
}