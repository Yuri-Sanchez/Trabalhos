/*Exerc�cio 1: Encontrando erros no c�digo:

#include<stdio.h>
#include<stdilib.h>

int main(void){
	int idade, qtdmaior, qtdmenor;
	qtdmaior = 0;
	qtdmenor = 0;
	for(int i=1, i<11, i++){
		printf(?Digite a idade do %d aluno?, i);
		scanf(&idade);
		if (id>=18){
			++qtdmaior;
		
		else{
			qtdmenor=qtdmenor+1;
		}
	}
	prinft(?\Na turma temos alunos maiores de idade?, qtdmaior);
	prinft(?\Na turma temos alunos menores de idade?, qtdmenor);
	return; 
}

obs: Encontrei todos os erros e fiz pequenas modifica��es
*/  


#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //erro 1: "stdilib.h"

int main(void){
    setlocale(LC_ALL, "portuguese");
    int idade, qtdmaior = 0, qtdmenor = 0;

    for(int i=1; i<11; i++){ //erro 2: As informa��es separadas por virgula
        printf("Digite a idade do %d� aluno: ", i);
        scanf("%d", &idade); //erro 3: N�o foi declarado o especificador

        if(idade >= 18) //erro 4: Erro na declara��o da vari�vel
            qtdmaior++; //erro 5: incremento foi escrito errado "++qtdmaior;"
        else //erro 6: Chaves antes do "else" n�o foi colocada
            qtdmenor++; // obs: qtdmenor++ ou qtdmenor = qtdmenor + 1
    }
    printf("\nNa turma temos %d alunos maiores de idade", qtdmaior); //erro 7: printf foi escrito errado "prinft", erro 8: foi colocado o "\" sem o acompanhamento do "n" e erro 9: N�o foi colocado o especificador da vari�vel "qtdmaior"
    printf("\nNa turma temos %d alunos menores de idade", qtdmenor); //erro 10: printf foi escrito errado "prinft", erro 11: foi colocado o "\" sem o acompanhamento do "n" e erro 12: N�o foi colocado o especificador da vari�vel "qtdmenor"

    return 0; //erro 13: N�o foi colocado o "0" do "return 0;"
}