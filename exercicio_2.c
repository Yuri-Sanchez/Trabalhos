/* Exerc�cio 6:
Escreva um programa em linguagem C que leia uma temperatura em graus Celsius digitada pelo usu�rio e a converta para graus Fahrenheit.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float f, celcius;

    printf("Digite a temperatura em �C para saber sua convers�o em �F: ");
    scanf("%f", &celcius);

    f = (celcius*9)/5 + 32;

    printf("\n%.2f� Celcius s�o %.2f� em Fahrenheit", celcius, f);

    return 0;
}