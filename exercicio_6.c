/*Exerc�cio 10:
Escreva um programa em linguagem C que leia 10 n�meros inteiros digitados pelo usu�rio. Ao final da leitura, o programa deve exibir:
a.	A soma de todos os n�meros digitados.
b.	A quantidade de n�meros positivos, negativos e iguais a zero.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, num, somatorio = 0, positivo = 0, negativo = 0, zero = 0;

    printf("Digite 10 n�meros inteiros\n");
    for(i=1; i<=10; i++){
        printf("%d� n�mero: ", i);
        scanf("%d", &num);
        somatorio+=num;
        if(num > 0)
            positivo++;
        else if(num < 0)
            negativo++;
        else 
            zero++;
    }

    printf("\nQuantidade de n�meros digitados:\n");
    printf("Positivos: %d\n", positivo);
    printf("Negativos: %d\n", negativo);
    printf("Iguais a zero: %d\n", zero);

    return 0;
}