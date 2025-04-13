/*Exercício 10:
Escreva um programa em linguagem C que leia 10 números inteiros digitados pelo usuário. Ao final da leitura, o programa deve exibir:
a.	A soma de todos os números digitados.
b.	A quantidade de números positivos, negativos e iguais a zero.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, num, somatorio = 0, positivo = 0, negativo = 0, zero = 0;

    printf("Digite 10 números inteiros\n");
    for(i=1; i<=10; i++){
        printf("%d° número: ", i);
        scanf("%d", &num);
        somatorio+=num;
        if(num > 0)
            positivo++;
        else if(num < 0)
            negativo++;
        else 
            zero++;
    }

    printf("\nQuantidade de números digitados:\n");
    printf("Positivos: %d\n", positivo);
    printf("Negativos: %d\n", negativo);
    printf("Iguais a zero: %d\n", zero);

    return 0;
}