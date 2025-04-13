/*Exercício 9: 
Desenvolva um programa em linguagem C que realize o controle de desempenho dos alunos de uma turma.
a.	O programa deve solicitar ao usuário a quantidade de alunos da turma.
b.	Para cada aluno, devem ser lidas três notas (nota1, nota2, nota3) e a média dos exercícios (ME).
c.	Com base nesses valores, calcule a Média de Aproveitamento (MA) utilizando a fórmula:
d.	MA = (nota1 + nota2 × 2 + nota3 × 3 + ME) / 7
e.	Em seguida, determine o conceito do aluno com base na média de aproveitamento, de acordo com a tabela a seguir:

Média de aproveitamento	Conceito 
>= 90				A
>= 75 e < 90 		B 
>= 60 e < 75		C 
>= 40 e < 60 		D 
< 40 				E
Ao final imprimir quantos alunos receberam o conceito A, B, C, D e E*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int qtd, i, u, a = 0, b = 0, c = 0, d = 0, e = 0;
    float n[3], ma = 0, me = 0;

    printf("Quantos alunos tem na turma?\n");
    scanf("%d", &qtd);

        for(i=1; i<=qtd; i++){
            printf("\nAluno %d\n", i);

            for(u=0;u<3;u++){
                printf("Digite a %d° nota: ", u + 1);
                scanf("%f", &n[u]);
            }

            printf("Digite a média dos exercícios do aluno %d: ", i);
            scanf("%f", &me);

            ma = (n[0] + (n[1]*2) + (n[2]*3) + me)/7;
            printf("\nA média de aproveitamento do aluno %d é: %.2f\n",i, ma);

            if(ma >= 90){
                printf("O aproveitamento do aluno %d foi: A\n", i);
                a++;
            }else if(ma >= 75){
                printf("O aproveitamento do aluno %d foi: B\n", i);
                b++;
            }else if(ma >= 60){
                printf("O aproveitamento do aluno %d foi: C\n", i);
                c++;
            }else if(ma >= 40){
                printf("O aproveitamento do aluno %d foi: D\n", i);
                d++;
            }else{ 
                printf("O aproveitamento do aluno %d foi: E\n", i);
                e++;
            }
        }
    printf("\nQuantidade de aproveitamento:\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
    printf("D: %d\n", d);
    printf("E: %d\n", e);

    return 0;
}